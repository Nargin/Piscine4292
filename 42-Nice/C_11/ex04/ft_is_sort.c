/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:15:24 by rmaurell          #+#    #+#             */
/*   Updated: 2022/08/04 21:07:56 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int	i;

	i = 1;
	if (lenght < 2)
		return (1);
	i++;
	while ((*f)(tab[i - 1], tab[i]) <= 0)
			i++;
	if (i == lenght)
		return (1);
	i = 1;
	while ((*f)(tab[i - 1], tab[i]) >= 0)
		i++;
	if (i == lenght)
		return (1);
	return (0);
}
