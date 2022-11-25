/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:59:45 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/02 12:18:38 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

struct s_nombre {
	int	premier;
	int	deuxieme;
	int	troisieme;
};

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	struct s_nombre	place;

	place.premier = 0;
	while (place.premier != 8)
	{
		place.deuxieme = place.premier + 1;
		while (place.deuxieme != 9)
		{
			place.troisieme = place.deuxieme + 1;
			while (place.troisieme != 10)
			{
				ft_putchar('0' + place.premier);
				ft_putchar('0' + place.deuxieme);
				ft_putchar('0' + place.troisieme);
				if (place.premier != 7)
					write(1, ", ", 2);
				place.troisieme++;
			}
			place.deuxieme++;
		}
		place.premier++;
	}	
}
