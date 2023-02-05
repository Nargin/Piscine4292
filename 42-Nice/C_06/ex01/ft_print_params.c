/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:20:58 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/21 13:56:17 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
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
	return (argc);
}
