/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:33:43 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/26 23:59:41 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	ft_check_dobles(int argc, char **argv)
{
	int	num_arg;
	int	fila_arg;
	int	resultado;

	num_arg = 0;
	while (num_arg < argc)
	{
		resultado = ft_atoi(argv[num_arg]);
		fila_arg = 0;
		while (fila_arg < argc)
		{
			if (ft_atoi(argv[num_arg]) == ft_atoi(argv[fila_arg]) && num_arg != fila_arg)
				return ('d');
			fila_arg++;
		}
		num_arg++;
	}
	return (resultado);
}
/*Chequeamos los dobles de una cadena de char
int	main(int argc, char **argv)
{
	int	argumentos;
	
	argumentos = 1;
	if (argc < 2)
		write(1, "Error\n", 6);
	if (argumentos < argc)
	{
		printf("ft_check_dobles: %c\n", ft_check_dobles(argc, argv));
		argumentos++;
	}
	return (0);
}
*/
void	ft_check_args(int argc, char **argv)
{
	int	num_arg;

	num_arg = 0;
	while (num_arg < argc)
	{
		if (ft_check_num(argv[num_arg]) == 'f' 
				|| (ft_check_int(argv[num_arg]) > 2147483647 
					|| ft_check_int(argv[num_arg]) < -2147483648))
			ft_error();
	num_arg++;
	}
	if (ft_check_dobles(argc, argv) == 'd')
		ft_error();
}

/*int	main(int argc, char **argv)
{
	int	argumentos;
	
	argumentos = 1;
	if (argc < 2)
		write(1, "Error\n", 6);
	if (argumentos < argc)
	{
		printf("ft_check_args: %c\n", ft_check_args(argc, argv));
		argumentos++;
	}
	return (0);
}*/
