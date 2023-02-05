/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:47:56 by rmaurell          #+#    #+#             */
/*   Updated: 2022/08/04 18:59:01 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int	i;
	int	*return_tab;

	i = -1;
	return_tab = malloc(lenght * sizeof(char *));
	if (return_tab == NULL)
		return (NULL);
	while (++i < lenght)
		return_tab[i] = (*f)(tab[i]);
	return (return_tab);
}
