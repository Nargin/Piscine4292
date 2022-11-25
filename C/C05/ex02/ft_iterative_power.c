/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:41:41 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/14 14:26:57 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	number;

	number = nb;
	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i++ < power)
		number *= nb;
	return (number);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(-10, 2));
}*/
