/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:33:55 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/20 21:43:53 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_printf(long int numero)
{
	int			longitud;
	char		*cadena;

	longitud = ft_numberlen(numero);
	cadena = malloc ((longitud * sizeof(char) + 1));
	if (!cadena)
		return (0);
	cadena[longitud] = '\0';
	longitud = longitud - 1;
	if (numero == 0)
		cadena[0] = '0';
	if (numero < 0)
	{
		numero = numero * -1;
		cadena[0] = '-';
	}
	while (numero > 0)
	{
		cadena[longitud] = (numero % 10) + '0';
		numero = numero / 10;
		longitud--;
	}
	return (cadena);
}
