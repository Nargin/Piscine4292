/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:05:35 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/14 17:52:54 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lettre;	

	lettre = 'z';
	while (lettre != 'a' - 1)
	{
		write(1, &lettre, 1);
		lettre--;
	}
}
