/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:09:58 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/21 21:35:47 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	affichage(char **argv)
{
	int	i;
	int	a;

	a = 1;
	i = 0;
	while (argv[a] != '\0')
	{
		while (argv[a][i])
			write(1, &argv[a][i++], 1);
		write(1, "\n", 1);
		a++;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tab[100];

	j = 0;
	i = 1;
	while (i < argc - 1)
	{
		while (argv[i][j] == argv[i + 1][j])
			j++;
		if (argv[i][j] > argv[i + 1][j])
		{
			tab[0] = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tab[0];
			if (i != 1)
				i--;
		}
		else
			i++;
		j = 0;
	}
	affichage(argv);
}
