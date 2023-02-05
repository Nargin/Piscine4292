/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:21:51 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/13 20:26:12 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int cp1, int cp2, int cp3)
{
	char	chiffre1;
	char	chiffre2;
	char	chiffre3;

	chiffre1 = '0' + cp1;
	chiffre2 = '0' + cp2;
	chiffre3 = '0' + cp3;
	write(1, &chiffre1, 1);
	write(1, &chiffre2, 1);
	write(1, &chiffre3, 1);
	if (cp1 != 7)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	c1;
	int	c2;
	int	c3;

	c1 = 0;
	while (c1 <= 7)
	{
		c2 = c1 + 1;
		while (c2 <= 8)
		{
			c3 = c2 + 1;
			while (c3 < 9)
			{
				print(c1, c2, c3);
				c3++;
			}
			print(c1, c2, c3);
			c2++;
		}
		c1++;
	}
}
