/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:43:36 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/23 10:56:42 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

struct s_integer {
	int	i;
	int	j;	
};

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	strlen_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	print[32];

	i = 0;
	if (!check_base(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			print[i++] = base[(2147483648 % strlen_base(base))];
			nbr /= strlen_base(base);
		}
		nbr *= -1;
	}
	while (nbr > 0)
	{
		print[i++] = base[nbr % strlen_base(base)];
		nbr /= strlen_base(base);
	}
	while (i != 0)
		write(1, &print[--i], 1);
}
