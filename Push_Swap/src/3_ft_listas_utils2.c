/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_ft_listas_utils2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:02:54 by dramirez          #+#    #+#             */
/*   Updated: 2023/03/19 23:02:54 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*	ft_error:
* 	Devuelve "Error" a la salida estandar después de liberar el bloque A y B
*	Sale con el código de error estándar "1"*/
void	ft_error(t_bloques **stack_a, t_bloques **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		ft_liberarbloques(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		ft_liberarbloques(stack_b);
	ft_putstr_fd("Error\n", 2);
	exit (EXIT_FAILURE);
}

/*	ft_liberarbloques:
*	Libera cada elemento de un stack dado y deja su puntero apuntando a NULL
*	Metemos en provisional la dirección al primer nodo de la pila: fila 40
*/
void	ft_liberarbloques(t_bloques **bloque)
{
	t_bloques	*provisional;

	if (!bloque || !(*bloque))
		return ;
	while (*bloque)
	{
		provisional = (*bloque)->siguiente;
		free(*bloque);
		*bloque = provisional;
	}
	*bloque = NULL;
}
