/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:12:00 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/20 17:53:42 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	posicion;

	posicion = 0;
	if (!str)
		return (NULL);
	while (str[posicion])
	{
		ft_putchar(str[posicion]);
		posicion++;
	}
	return (posicion);
}
