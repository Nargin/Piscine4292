/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:53:27 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/28 15:32:33 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	k;

	k = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc((max - min) * (sizeof(int)));
	while (min < max)
	{
		(*range)[k++] = min++;
	}
	return (k);
}
