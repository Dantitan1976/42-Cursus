/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:11:08 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/04 14:27:31 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int numero)
{
	char	*cadena;
	int		longitud;

	cadena = ft_itoa(numero);
	longitud = ft_putstr(cadena);
	free(cadena);
	return (longitud);
}
