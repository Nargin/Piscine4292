/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:08:57 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/28 10:26:02 by rmaurell         ###   ########.fr       */
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
	if (nb == 0)
		write(1, "0", 1);
	while (nb > 0)
	{
		number[i++] = nb % 10;
		nb /= 10;
	}
	i--;
	while (i >= 0)
		ft_putchar('0' + number[i--]);
}
