/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:59:07 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/09 13:56:37 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	cont;
	int	signo;
	int	numeros;

	cont = 0;
	signo = 1;
	numeros = 0;
	while (nptr[cont] != '\0' && (nptr[cont] == ' '
			|| (nptr[cont] >= 9 && nptr[cont] <= 13)))
		cont++;
	if (nptr[cont] != '\0' && (nptr[cont] == '+' || nptr[cont] == '-'))
	{
		if (nptr[cont] == '-')
			signo = -signo;
		cont++;
	}
	while (nptr[cont] != '\0' && (nptr[cont] >= '0' && nptr[cont] <= '9'))
	{
			numeros = (numeros * 10) + (nptr[cont] - '0');
			cont++;
	}
	return (numeros * signo);
}
