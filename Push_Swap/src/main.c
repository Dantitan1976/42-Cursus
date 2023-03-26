/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:13:36 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/27 00:13:36 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_bloques	*bloque_a;
	t_bloques	*bloque_b;
	int			bloque_size;
	char	**cadena_split;

	if (argc < 2)
		return(0);
	else if (argc == 2)
	{
		cadena_split = ft_split(argv[1], ' ');
		if (!cadena_split[0])
			ft_error(NULL, NULL);
		ft_check_args(ft_numseparad(argv[1], ' '), cadena_split);
	}
	else if (argc > 2)
		ft_check_args_int(argc, argv);
	bloque_b = NULL;
	bloque_a = ft_datosenlista_int(argc, argv);
	bloque_size = ft_lstsize(bloque_a);
	ft_indices(bloque_a, bloque_size + 1);
	ft_push_swap(&bloque_a, bloque_b, bloque_size);
	ft_liberarbloques(&bloque_a);
	ft_liberarbloques(&bloque_b);
	return (0);		
}			
