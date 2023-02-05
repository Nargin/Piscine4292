/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:09:18 by rmaurell          #+#    #+#             */
/*   Updated: 2022/08/04 18:08:33 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int lenght, int (*f)(char *))
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (++i < lenght)
		if ((*f)(tab[i]) != 0)
			count++;
	return (count);
}
