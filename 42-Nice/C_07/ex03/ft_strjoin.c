/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:23:00 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/28 15:50:15 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	lenght_w_sep(char **strs, char *sep, int size)
{
	int	i;
	int	k;
	int	number;
	int	lenght_sep;

	lenght_sep = 0;
	number = 0;
	k = 0;
	i = 0;
	while (sep[lenght_sep])
		lenght_sep++;
	while (i < size - 1 && strs[i])
	{
		while (strs[i][k])
			k++;
		number += k + lenght_sep;
		k = 0;
		i++;
	}
	return (number - lenght_sep);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*src;
	int		k;
	int		o;

	k = 0;
	o = 0;
	src = (char *) malloc(lenght_w_sep(strs, sep, size) * sizeof(char) + 1);
	i = 0;
	if (size == 0)
		return (src);
	while (i <= size - 1 && strs[i])
	{
		while (strs[i][k])
			src[o++] = strs[i][k++];
		k = 0;
		while (sep[k] && i != size - 1 && strs[i + 1] != 0)
			src[o++] = sep[k++];
		k = 0;
		i++;
	}
	src[o] = '\0';
	return (src);
}
