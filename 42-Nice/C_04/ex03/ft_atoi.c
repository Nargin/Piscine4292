/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaurell <mejumine@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:34:51 by rmaurell          #+#    #+#             */
/*   Updated: 2022/07/22 03:10:28 by rmaurell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/*

int	main(void)
{
	printf("42:%d\n", ft_atoi("  \n  42t4457"));
	printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
	printf("0:%d\n", ft_atoi("\0 1337"));
	printf("0:%d\n", ft_atoi("-0"));
	printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("-1325632167:%d\n", ft_atoi("-1325632167"));
	printf("-100:%d\n", ft_atoi("-100"));
	printf("min:%d\n", ft_atoi("\t---+2147483648"));
	printf("max:%d\n", ft_atoi("\v2147483647"));

	int val;
	char str[20];

	strcpy(str, "-2147483648");
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
	printf("\n**************\n\n");
	strcpy(str, "2147483647");
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
	printf("\n**************\n\n");
	strcpy(str, "--98993489");
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
	printf("\n**************\n\n");
	strcpy(str, "    --++-12345");
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
	printf("\n**************\n\n");
	strcpy(str, " -+--98993A489");
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
	printf("\n**************\n\n");
	strcpy(str, " ---+--+1234ab567");
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
	printf("\n**************\n\n");
	strcpy(str, "9899+3489");
	val = atoi(str);
	printf("ATOI    String value = %s, Int value = %d\n", str, val);
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
	printf("\n**************\n\n");
	strcpy(str, "A98993489");
	val = atoi(str);
	printf("ATOI    String value = %s, Int value = %d\n", str, val);
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
	printf("\n**************\n\n");
	strcpy(str, "-1-");
	val = atoi(str);
	printf("ATOI    String value = %s, Int value = %d\n", str, val);
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
	printf("\n**************\n\n");
	strcpy(str, "");
	val = atoi(str);
	printf("ATOI    String value = %s, Int value = %d\n", str, val);
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
	printf("\n**************\n\n");
	strcpy(str, "\n\t\r\v\f 2");
	val = atoi(str);
	printf("ATOI    String value = %s, Int value = %d\n", str, val);
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
	printf("\n**************\n\n");
	strcpy(str, "\b 2");
	val = atoi(str);
	printf("ATOI    String value = %s, Int value = %d\n", str, val);
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
	printf("\n**************\n\n");
	strcpy(str, "/555");
	val = atoi(str);
	printf("ATOI    String value = %s, Int value = %d\n", str, val);
	val = ft_atoi(str);
	printf("FT_ATOI String value = %s, Int value = %d\n", str, val);
}
*/