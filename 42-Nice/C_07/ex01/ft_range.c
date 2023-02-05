/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:32:12 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/24 18:50:41 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	calcul_taille(int min, int max)
{
	if (max - min < 0)
		return ((max - min) * -1);
	return (max - min);
}

int	*ft_range(int min, int max)
{
	int	*tableau;
	int	i;

	i = 0;
	tableau = (int *) malloc(calcul_taille(min, max) * sizeof(int));
	if (min >= max)
		return (0);
	while (i < calcul_taille(min, max))
	{
		tableau[i] = min + i;
		i++;
	}
	return (tableau);
}
