/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basenum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:53:38 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/04 12:59:53 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_basenum(size_t numero, int base)
{
	int	contador;

	contador = 0;
	if (!numero)
		return (1);
	while (numero > 0)
	{
		numero = numero / base;
		contador++;
	}
	return (contador);
}
