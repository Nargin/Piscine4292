/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:46:40 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/14 12:00:58 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int c1, int c2)
{
	char	cp;

	cp = '0' + c1 / 10;
	write(1, &cp, 1);
	cp = '0' + c1 - (c1 / 10) * 10;
	write(1, &cp, 1);
	write(1, " ", 1);
	cp = '0' + c2 / 10;
	write(1, &cp, 1);
	cp = '0' + c2 - (c2 / 10) * 10;
	write(1, &cp, 1);
	if (c1 != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	comb1;
	int	comb2;

	comb1 = 0;
	comb2 = comb1 + 1;
	while (comb1 <= 98)
	{
		while (comb2 <= 99)
		{
			print(comb1, comb2);
			comb2++;
		}
		comb1++;
		comb2 = comb1 + 1;
	}	
}
