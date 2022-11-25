/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:51:05 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/11 10:52:07 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	taille_dest;
	unsigned int	taille_src;

	taille_dest = ft_strlen(dest);
	taille_src = ft_strlen(src);
	i = taille_dest;
	j = 0;
	if (size < 1)
		return (taille_src + size);
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = 0;
	if (size < taille_dest)
		return (taille_src + size);
	else
		return (taille_dest + taille_src);
}
