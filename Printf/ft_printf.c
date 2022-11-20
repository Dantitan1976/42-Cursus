/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:13:53 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/20 19:40:06 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversiones(va_list argum, const char *cadena, int contador)
{
	if (cadena[contador] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (cadena[contador] == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (cadena[contador] == 'p')
	if (cadena[contador] == 'd')
	if (cadena[contador] == 'i')
	if (cadena[contador] == 'u')
	if (cadena[contador] == 'x')
	if (cadena[contador] == 'X')
	else
		return (ft_putchar('%'));
}


