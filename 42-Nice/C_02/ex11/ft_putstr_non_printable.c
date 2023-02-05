/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:33:43 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/17 15:03:59 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	calcul_hexa(char *str, int i)
{
	int		reste;
	int		k;
	int		quotient;
	char	hexa[2];

	k = 0;
	quotient = str[i];
	while (quotient != 0)
	{
		hexa[k++] = quotient / 10;
		reste = quotient % 16;
		if (reste < 10)
			hexa[k++] = 48 + reste;
		else
			hexa[k++] = 55 + reste;
		quotient = quotient / 16;
	}
	k = 0;
	while (hexa[k++] != '\0')
		if (hexa[k] <= 'Z' && hexa[k] >= 'A')
			write(1, 32 + &hexa[k], 1);
	return (i);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 33 && str[i] <= 126) && str[i] != 32)
		{
			write(1, "\\", 1);
			calcul_hexa(str, i);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char src[40] = "Planete\n Terre";

	ft_putstr_non_printable(src);
}
