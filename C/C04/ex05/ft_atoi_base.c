/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:39:37 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/23 10:54:48 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (1);
	return (0);
}

int	pos_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (0);
}

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
	var.i = -1;
	while (base[++var.i])
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	is_neg;
	int	number;

	i = 0;
	is_neg = 1;
	number = 0;
	if (!check_base(base))
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			is_neg *= -1;
	while (str[i] && in_base(str[i], base))
		number = number * base_len(base) + pos_in_base(str[i++], base);
	return (number * is_neg);
}
