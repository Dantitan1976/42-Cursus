/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:33:43 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/20 22:18:09 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	ft_check_num(char *str)
{
	int	posicion;

	posicion = 0;
	if ((str[posicion] == '-' || str[posicion] == '+')
			|| (str[posicion] >= '0' && str[posicion] <= '9'))
		posicion++;
	else
		return ('f');
	while (str[posicion])
	{
		if (str[posicion] >= '0' && str[posicion] <= '9')
			posicion++;
		else
			return ('f');
	}
	return ('r');
}

/*Chequeamos que todos son números como una cadena de chars
int	main(void)
{
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("123456"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("123456a4445"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("Hola Mundo"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("-123456"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("+123456"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num(" ---+--+1234ab567"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("     +42"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("\t\n\v\f\r 42"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("5"));
	return (0);
}*/
