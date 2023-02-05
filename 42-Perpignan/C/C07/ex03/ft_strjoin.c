/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:07:24 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/22 10:10:45 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strmalloc(char **strs, char *sep, int size)
{
	int	i;
	int	k;
	int	lenght;
	int	sep_count;

	i = 0;
	k = -1;
	sep_count = 0;
	lenght = 0;
	if (!size)
		return (0);
	while (++k < size)
	{
		while (strs[k][i++])
			lenght++;
		i = 0;
		sep_count++;
	}
	return (lenght + ((sep_count - 1) * ft_strlen(sep)));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	char	*nx;
	int		y;

	y = 0;
	i = 0;
	k = -1;
	nx = (char *) malloc((ft_strmalloc(strs, sep, size) + 1) * sizeof(char));
	if (!size)
		return (nx);
	while (strs[++k] && k < size)
	{
		while (strs[k][i])
			nx[y++] = strs[k][i++];
		i = 0;
		while (sep[i] && k < size - 1)
			nx[y++] = sep[i++];
		i = 0;
	}
	nx[y] = 0;
	return (nx);
}
