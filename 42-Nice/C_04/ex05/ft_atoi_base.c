/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:26:33 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/28 10:28:57 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *str)
{
	int	i;
	int	y;

	i = 0;
	if (str[i] == '\0' || str[i + 1] == '\0')
		return (0);
	while (str[i])
	{
		if ((str[i] == '+' || str[i] == '-') || (str[i] >= 126 || str[i] <= 31))
			return (0);
		y = i;
		while (str[++y])
			if (str[i] == str[y])
				return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		l_base;
	int		i;
	char	number[100];	

	l_base = 0;
	i = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr *= -1;
			ft_putchar('-');
		}
		while (base[l_base])
			l_base++;
		while (nbr > 0)
		{
			number[i++] = nbr % l_base;
			nbr /= l_base;
		}
		while (--i >= 0)
			ft_putchar(base[(unsigned int) number[i]]);
	}
}
