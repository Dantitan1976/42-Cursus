/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:47:53 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/05 21:48:56 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int ft_checknum(int argc, char **argv)
{
	int	posicion;
	int	digitos;
	
	posicion = 1;

	if (argc <= 1)
		return (0);
	while (*argv[posicion])
	{
		digitos = 0;
		while (argv[posicion][digitos])
		{
			if (argv[posicion][digitos] == '-')
			{
				if (!ft_isdigit(argv[posicion][digitos - 1]))
					return (0);
				digitos++;
			}
			if (!ft_isdigit(arg[posicion][digitos]));
					return(0);
		}
		posicion++;
	}
	return(1);
}
