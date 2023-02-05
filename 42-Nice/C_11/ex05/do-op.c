/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:50:54 by rmaurell          #+#    #+#             */
/*   Updated: 2022/08/04 19:01:12 by rmaurell         ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int	i;
	int	negatif;
	int	result;

	result = 0;
	i = 0;
	negatif = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negatif *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
		result = (result * 10) + str[i++] - 48;
	return (result * negatif);
}

void	check_operateur(int nbr1, int nbr2, char argv)
{
	if (argv == '+')
		ft_putnbr((nbr1 + nbr2));
	else if (argv == '-')
		ft_putnbr((nbr1 - nbr2));
	else if (argv == '%')
		ft_putnbr((nbr1 % nbr2));
	else if (argv == '*')
		ft_putnbr((nbr1 * nbr2));
	else if (argv == '/')
		ft_putnbr((nbr1 / nbr2));
	else
		write(1, "0\n", 2);
}

int	main(int argc, char *argv[])
{
	int	nbr1;
	int	nbr2;

	if (argc != 4)
		return (1);
	if (argv[2][1])
	{
		write(1, "0\n", 2);
		return (0);
	}
	nbr1 = ft_atoi(argv[1]);
	nbr2 = ft_atoi(argv[3]);
	if (nbr2 == 0 && argv[2][0] == '%')
		write(1, "Stop : modulo by zero\n", 22);
	else if (nbr2 == 0 && argv[2][0] == '/')
		write(1, "Stop : division by zero\n", 24);
	else
		check_operateur(nbr1, nbr2, argv[2][0]);
}
