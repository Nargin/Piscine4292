/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:03:40 by rmaurell          #+#    #+#             */
/*   Updated: 2022/08/04 19:24:33 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	number[10];

	i = 0;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
	}
	while (nb > 0)
	{
		number[i++] = nb % 10;
		nb /= 10;
	}
	i--;
	while (i >= 0)
		ft_putchar('0' + number[i--]);
}
