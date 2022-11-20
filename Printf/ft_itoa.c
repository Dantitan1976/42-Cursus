/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:33:55 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/20 19:44:53 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa(long int n)
{
	int			longitud;
	char		*cadena;

	longitud = ft_numberlen(n);
	cadena = malloc ((longitud * sizeof(char) + 1));
	if (!cadena)
		return (NULL);
