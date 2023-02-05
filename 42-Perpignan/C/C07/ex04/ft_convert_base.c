/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:24:53 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/24 12:57:27 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		check_base(char *base);

char	*convert_base(int nbr, char *base);

int	baselen(char *base)
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
		if (c == base[i])
			return (1);
	return (0);
}

int	pos_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	number;
	int	is_neg;

	i = 0;
	number = 0;
	is_neg = 1;
	if (!check_base(base_to) || !check_base(base_from))
		return (NULL);
	while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
		if (nbr[i++] == '-')
			is_neg *= -1;
	while (nbr[i] && in_base(nbr[i], base_from))
		number = number * baselen(base_from) + pos_base(nbr[i++], base_from);
	return (convert_base((number * is_neg), base_to));
}
