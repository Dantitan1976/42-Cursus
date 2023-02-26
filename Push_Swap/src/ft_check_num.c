/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:33:43 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/22 21:27:59 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	ft_check_num(char *str)
{
	int	posicion;

	posicion = 0;
	if ((str[posicion] == '-' || str[posicion] == '+')
			|| (str[posicion] >= '0' && str[posicion] <= '9'))
		posicion++;
	else
		return ('f');
	while (str[posicion])
	{
		if (str[posicion] >= '0' && str[posicion] <= '9')
			posicion++;
		else
			return ('f');
	}
	return ('r');
}

/*Chequeamos que todos son números como una cadena de chars
int	main(void)
{
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("123456"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("123456a4445"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("Hola Mundo"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("-123456"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("+123456"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num(" ---+--+1234ab567"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("     +42"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("\t\n\v\f\r 42"));
	printf("ft_atoi_check_num: %c\n", ft_atoi_check_num("5"));
	return (0);
}*/

long int	ft_check_int(char *str)
{
	int	cont;
	int	signo;
	long int	numeros;

	cont = 0;
	signo = 1;
	numeros = 0;
	while (str[cont] == 32 || (str[cont] >= 9 && str[cont] <= 13))
		cont++;
	while (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			signo = -signo;
		cont++;
	}
	if (!str[cont])
		return (2147483648);
	while (str[cont] >= '0' && str[cont] <= '9')
	{
			numeros = numeros * 10 + (str[cont] - '0');
			cont++;
	}
	return (numeros * signo);
}

char	ft_check_dobles(int argc, char **argv)
{
	int	num_arg;
	int	fila_arg;
	int	resultado;

	num_arg = 0;
	while (num_arg < argc)
	{
		resultado = ft_check_num(argv[num_arg]);
		fila_arg = 0;
		while (fila_arg < argc)
		{
			if (ft_check_num(argv[num_arg]) == ft_check_num(argv[fila_arg]) && num_arg != fila_arg)
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
}*/
void	ft_putstr_fd(char *s, int fd)
{
	int	posicion;

	posicion = 0;
	while (s[posicion])
	{
		write(fd, &s[posicion], 1);
		posicion++;
	}
}

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit (EXIT_FAILURE);
}

void	ft_check_args(int argc, char **argv)
{
	int	num_arg;

	num_arg = 0;
	while (num_arg < argc)
	{
		if (ft_check_num(argv[num_arg]) == 'f' 
				|| ft_check_int(argv[num_arg]) > 2147483647 
					|| ft_check_int(argv[num_arg]) < -2147483647)
			ft_error();
	num_arg++;
	}
	if (ft_check_dobles(argc, argv) == 'd')
		ft_error();
}
