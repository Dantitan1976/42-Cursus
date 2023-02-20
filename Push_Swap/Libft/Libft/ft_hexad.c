/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:10:36 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/04 13:03:07 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexad(unsigned long long numero, char conversor)
{
	int	num;

	num = ft_basenum(numero, 16);
	if (numero >= 16)
	{
		ft_hexad(numero / 16, conversor);
		ft_hexad(numero % 16, conversor);
	}
	else
	{
		if (numero < 10)
			ft_putchar(numero + '0');
		else if (conversor == 'x')
			ft_putchar(numero - 10 + 'a');
		else if (conversor == 'X')
			ft_putchar(numero - 10 + 'A');
	}
	return (num);
}
