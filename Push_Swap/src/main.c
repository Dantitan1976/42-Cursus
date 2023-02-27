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
	char	**cadena_split;

	if (argc < 2)
		return(0);
	else if (argc == 2)
	{
		cadena_split = ft_split(argv[1], ' ');
		if (!cadena_split[0])
			ft_error();
		ft_check_args(ft_numseparad(argv[1], ' '), cadena_split);
	}
	else if (argc > 2)
		ft_check_args_int(argc, argv);
	return (0);		
}			
