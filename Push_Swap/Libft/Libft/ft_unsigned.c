/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:36:06 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/04 14:36:40 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_unsigned(unsigned int numero)
{
	char	*cadena;
	int		longitud;

	cadena = ft_numachar(numero);
	longitud = ft_putstr(cadena);
	free(cadena);
	return (longitud);
}
