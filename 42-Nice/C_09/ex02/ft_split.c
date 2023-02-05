/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:53:02 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/31 13:54:12 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *str, int start, int end)
{
	int		i;
	char	*copy;

	i = end - start;
	copy = malloc((i * sizeof(char)) + 1);
	i = 0;
	while (start < end)
		copy[i++] = str[start++];
	copy[i] = '\0';
	return (copy);
}

int	is_separateur(char c, char *separateur)
{
	int	i;

	i = -1;
	while (separateur[++i])
		if (c == separateur[i])
			return (1);
	return (0);
}

int	ft_count(char *str, char *separateur)
{
	int	i;
	int	counter;
	int	start;

	start = 0;
	counter = 0;
	i = 0;
	while (str[i])
	{
		while (is_separateur(str[i], separateur) && str[i])
			i++;
		start = i;
		while (!is_separateur(str[i], separateur) && str[i])
			i++;
		if (i != start)
			counter++;
	}
	return (counter);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		counter;
	int		start;
	char	**tab_str;

	start = 0;
	counter = 0;
	i = 0;
	tab_str = malloc ((ft_count(str, charset) + 1) * sizeof(char *));
	while (str[i])
	{
		while (is_separateur(str[i], charset) && str[i])
			i++;
		start = i;
		while (!is_separateur(str[i], charset) && str[i])
			i++;
		if (i != start)
			tab_str[counter++] = ft_strdup(str, start, i);
	}
	tab_str[counter] = 0;
	return (tab_str);
}
