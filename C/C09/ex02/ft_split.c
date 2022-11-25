/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:30:20 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/21 17:08:21 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separateur(char c, char *sep)
{
	int	i;

	i = -1;
	while (sep[++i])
		if (c == sep[i])
			return (1);
	return (0);
}

char	*ft_strdup(char	*str, int start, int end)
{
	int		i;
	char	*cp;

	i = 0;
	cp = (char *) malloc(((end - start) + 1) * sizeof(char));
	while (start < end)
		cp[i++] = str[start++];
	cp[i] = 0;
	return (cp);
}

int	ft_count(char *str, char *sep)
{
	int	i;
	int	start;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_separateur(str[i], sep) && str[i])
			i++;
		start = i;
		while (!is_separateur(str[i], sep) && str[i])
			i++;
		if (start != i)
			count++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		start;
	int		j;

	i = 0;
	j = 0;
	tab = (char **) malloc((ft_count(str, charset) + 1) * sizeof(char *));
	while (str[i])
	{
		while (is_separateur(str[i], charset) && str[i])
			i++;
		start = i;
		while (!is_separateur(str[i], charset) && str[i])
			i++;
		if (start != i)
			tab[j++] = ft_strdup(str, start, i);
	}
	tab[j] = 0;
	return (tab);
}
