/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:45:01 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/23 12:11:46 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_longnum(int numero)
{
	int	contador;

	contador = 1;
	if (numero < 0)
	{
		numero = numero * -1;
		contador++;
	}
	while (numero >= 10)
	{
		numero = numero / 10;
		contador++;
	}
	return (contador);
}

char	*ft_itoa(int n)
{
	char	*cadena;
	int		numero;
	int		longitud;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	longitud = ft_longnum(n);
	cadena = (char *)malloc((sizeof(char)) * (longitud + 1));
	numero = n;
	if (!cadena)
		return (NULL);
	cadena[longitud--] = 0;
	if (numero < 0)
	{
		cadena[0] = '-';
		numero = numero * -1;
	}
	while (numero > 0)
	{
		cadena[longitud--] = numero % 10 + '0';
		numero = numero / 10;
	}
	return (cadena);
}
