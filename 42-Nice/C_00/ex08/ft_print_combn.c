/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:43:52 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/23 21:29:06 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nbr(char number[10], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(number[i] + '0');
		i++;
	}
	if (number[0] != 10 - n)
	{
		write(1, ", ", 2);
	}
}

void	ft_while(char number[10], int n, int i)
{
	while (number[i] <= 10 - n + i)
	{
		number[i + 1] = number[i] + 1;
		if (i < n - 1)
			ft_while(number, n, i + 1);
		else
			ft_print_nbr(number, n);
		number[i]++;
	}
}

void	ft_print_combn(int n)
{
	char	number[10];
	int		i;

	i = 0;
	while (i < n)
	{
		number[i] = 0;
		i++;
	}
	ft_while(number, n, 0);
}
