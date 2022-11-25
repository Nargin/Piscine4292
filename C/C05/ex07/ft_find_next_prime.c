/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:32:54 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/14 15:25:51 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (!(nb % 2))
		return (0);
	while (i <= (nb / i))
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else if (nb == 5)
		return (5);
	while (!ft_is_prime(nb))
	{
		if (!((nb - 3) % 10))
			nb += 4;
		else
			nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
		ft_find_next_prime(-1) == 2 ? "OK" : "Fail",
		ft_find_next_prime(-3) == 2 ? "OK" : "Fail",
		ft_find_next_prime(0) == 2 ? "OK" : "Fail",
		ft_find_next_prime(1) == 2 ? "OK" : "Fail",
		ft_find_next_prime(2) == 2 ? "OK" : "Fail",
		ft_find_next_prime(3) == 3 ? "OK" : "Fail",
		ft_find_next_prime(4) == 5 ? "OK" : "Fail",
		ft_find_next_prime(5) == 5 ? "OK" : "Fail",
		ft_find_next_prime(6) == 7 ? "OK" : "Fail",
		ft_find_next_prime(7) == 7 ? "OK" : "Fail",
		ft_find_next_prime(10) == 11 ? "OK" : "Fail",
		ft_find_next_prime(11) == 11 ? "OK" : "Fail",
		ft_find_next_prime(13) == 13 ? "OK" : "Fail",
		ft_find_next_prime(19) == 19 ? "OK" : "Fail",
		ft_find_next_prime(20) == 23 ? "OK" : "Fail"
		  );
	printf("%d\n", ft_find_next_prime(2134554567));
}*/
