/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:03:41 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/02 13:10:40 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	premier;
	int	deuxieme;

	premier = 0;
	while (premier != 99)
	{
		deuxieme = premier + 1;
		while (deuxieme != 100)
		{
			ft_putchar('0' + premier / 10);
			ft_putchar('0' + premier % 10);
			ft_putchar(' ');
			ft_putchar('0' + deuxieme / 10);
			ft_putchar('0' + deuxieme % 10);
			if (premier != 98)
				write(1, ", ", 2);
			deuxieme++;
		}
		premier++;
	}
}
