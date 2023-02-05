/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:42:14 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/08 15:00:16 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEX "0123456789abcdef"

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_non_printable(char c)
{
	if (c < 32 || c > 126)
		return (1);
	return (0);
}

void	print_hexa(unsigned char c)
{
	write(1, "\\", 1);
	ft_putchar(HEX[(c / 16)]);
	ft_putchar(HEX[(c % 16)]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_non_printable(str[i]))
			print_hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int		main()
{
	char c[] = "Coucou\ntu vas bien ?";
	ft_putstr("Coucou\\0atu vas bien ? : ");
	ft_putstr_non_printable(c);
	char d[] = "\x81\xbe";
	ft_putstr("\n\\\\be : ");
	ft_putstr_non_printable(d);
}*/
