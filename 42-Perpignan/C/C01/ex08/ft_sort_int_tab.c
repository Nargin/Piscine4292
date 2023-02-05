/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:47:10 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/03 11:58:56 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (tab[i] && i < size - 1)
	{
		while (tab[i] > tab[i + 1] && tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			if (i != 0)
				i--;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[4] = {100, 2, 20 ,1};

	printf("40, 2, 20, 10\n");
	ft_sort_int_tab(tab, 4);
	for (int i = 0; i < 4; i++)
		printf("%d, ", tab[i]);
}*/
