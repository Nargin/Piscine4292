/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:08:40 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/14 17:54:05 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	chiffre;
	int		i;

	i = 0;
	while (i < 10)
	{
		chiffre = '0' + i;
		write(1, &chiffre, 1);
		i++;
	}
}
