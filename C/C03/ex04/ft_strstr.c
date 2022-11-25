/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:42:34 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/11 10:50:33 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[y])
			y++;
		else
			y = 0;
		if (!to_find[y])
			return (str + i - --y);
		i++;
	}
	return (0);
}
