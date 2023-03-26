/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ordenar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:36:13 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/27 19:36:13 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*ft_ordenar_array(int *numeros, int longitud)//Ordenamiento por burbuja
{
	int	temporal;//Temporal para el swap
	int	num_1;//Cabecera de la lista de números
	int	num_2;//Número que ordenamos
	
	num_1 = 0;
	while (num_1 < longitud)
	{
		num_2 = 0;
		while (num_2 < longitud)
		{
			if (numeros[num_2] > numeros[num_2 + 1] && (num_2 + 1) < longitud)//Para que sea decreciente cambiamos el > por un <
			{
				temporal = numeros[num_2];
				numeros[num_2] = numeros[num_2 + 1];
				numeros[num_2 + 1] = temporal;
			}
			num_2++;
		}
		num_1++;
	}
	return (numeros);
}
/*
int	main(void)
{
	int	numeros[] = {3740,7381,5123,2789,7964,2551,141,6401,6754,8202,64,5827,6792,843,6974,613,7998,9476,3232,64};
	int longitud = sizeof(numeros) / sizeof(numeros[0]);
	
	printf("Numeros sin ordenar\n");
	int posicion;
	
	posicion = 0;
	while(posicion < longitud)
	{
		printf("%d\n", numeros[posicion]);
		posicion++;
	}
	ft_ordenar_array(numeros, longitud);
	printf("Numeros ordenados\n");
	posicion = 0;
	while(posicion < longitud)
	{
		printf("%d\n", numeros[posicion]);
		posicion++;
	}
	return (0);
}*/

/*	ft_check_orden:
*	Chequea si la pila está ordenada
*	Devuelve 0 si NO ESTÁ ORDENADA y 1 si SÍ LO ESTÁ*/
int	ft_check_orden(t_bloques *bloque)
{
	while (bloque->siguiente != NULL)
	{
		if(bloque->numero > bloque->siguiente->numero)
			return (0);
		bloque = bloque->siguiente;
	}
	return (1);
}

/*	push_swap:
*	Elige el metodo de ordenación dependiendo del número
*	de valores a ordenar
*/
static void ft_push_swap(t_bloques **bloque_a, t_bloques **bloque_b, int bloque_size)
{
	if (bloque_size == 2 && !ft_check_orden(*bloque_a))
		ft_sa(bloque_a);
	else if (bloque_size == 3 && !ft_check_orden(*bloque_a))
		ft_ordenar_3(bloque_a);
	else if (bloque_size > 3 && !ft_check_orden(*bloque_a))
		ft_ordenar_3mas(bloque_a, bloque_b);
}
