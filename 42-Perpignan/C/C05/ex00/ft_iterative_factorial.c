/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:43:51 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/10 14:44:21 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	nbr;

	i = 1;
	nbr = 1;
	if (nb < 0)
		return (0);
	else if (!nb)
		return (1);
	while (i <= nb)
		nbr *= i++;
	return (nbr);
}
