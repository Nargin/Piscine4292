/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:39:31 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/24 12:55:31 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	baselen(char *base);

struct s_integer {
	int	i;
	int	j;
};

int	check_base(char *base)
{
	struct s_integer	var;

	var.i = 0;
	while (base[var.i])
		var.i++;
	if (var.i < 2)
		return (0);
	var.i++;
	while (--var.i >= 0)
		if (base[var.i] == '-' || base[var.i] == '+'
			|| base[var.i] == 32 || (base[var.i] >= 9 && base[var.i] <= 13))
			return (0);
	var.i = 0;
	while (base[var.i])
	{
		var.j = 0;
		while (base[var.j])
		{
			if (base[var.j] == base[var.i] && var.j != var.i)
				return (0);
			var.j++;
		}
		var.i++;
	}
	return (1);
}

char	*reverse(char *str)
{
	int		i;
	int		len;
	char	c;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	len--;
	while (i <= len)
	{
		c = str[i];
		str[i++] = str[len];
		str[len--] = c;
	}
	return (str);
}

char	*final_str(char *str, int neg, int i)
{
	if (neg == -1)
		str[i++] = '-';
	str[i] = 0;
	return (str);
}

char	*convert_base(int nbr, char *base)
{
	char	*final;
	int		i;
	int		neg;

	i = 0;
	neg = 1;
	final = malloc ((32 + 1) * sizeof(char));
	if (nbr < 0)
	{
		neg = -1;
		if (nbr == -2147483648)
		{
			final[i] = base[2147483648 % baselen(base)];
			nbr /= baselen(base);
		}
		nbr *= -1;
	}
	while (nbr > 0)
	{
		final[i++] = base[nbr % baselen(base)];
		nbr /= baselen(base);
	}
	final_str(final, neg, i);
	return (reverse(final));
}
