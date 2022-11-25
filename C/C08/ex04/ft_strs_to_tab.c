/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:10:11 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/17 09:12:07 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*nx;

	i = -1;
	nx = (char *) malloc((ft_strlen(str) + 1) * sizeof(char));
	while (str[++i])
		nx[i] = str[i];
	nx[i] = 0;
	return (nx);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	i = -1;
	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!tab)
		return (NULL);
	while (++i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
	}
	tab[i].str = 0;
	return (tab);
}
