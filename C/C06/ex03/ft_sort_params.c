/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:10:48 by romaurel          #+#    #+#             */
/*   Updated: 2022/11/16 16:53:05 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (argv[++i])
	{
		while (argv[i][j])
			write(1, &argv[i][j++], 1);
		j = 0;
		write(1, "\n", 1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = 1;
	while (i < argc - 1)
	{
		while (argv[i][j] == argv[i + 1][j] && argv[i + 1])
			j++;
		if (argv[i + 1][j] < argv[i][j])
		{
			str = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = str;
			if (i != 1)
				i--;
		}
		else
			i++;
		j = 0;
	}
	return (ft_putstr(argv));
}
