/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:16:20 by dramirez          #+#    #+#             */
/*   Updated: 2023/04/14 21:16:20 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	ft_handler_client(int sig_cliente)
{
	static int	byte = 0;

	if (sig_cliente == SIGUSR1)
		byte++;
	if (sig_cliente == SIGUSR2)
		ft_printf("Mensaje recibido. Tamaño bytes:%d\n", byte);
}

void	ft_char_signal(char char_env, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((char_env & (1 << bit)) == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		bit++;
		usleep(150);
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	int		posicion;
	char	*cadena;

	if (argc != 3 || ft_strlen(argv[2]) == 0)
	{
		ft_printf("Error. Debe introducir un PID y un mensaje\n");
		return (0);
	}
	pid = ft_atoi(argv[1]);
	cadena = argv[2];
	ft_printf("Cliente: PID: %d\n", pid);
	ft_printf("Cliente: Mensaje: %s\n", cadena);
	signal(SIGUSR1, ft_handler_client);
	signal(SIGUSR2, ft_handler_client);
	posicion = 0;
	while (cadena[posicion])
	{
		ft_char_signal(cadena[posicion], pid);
		posicion++;
	}
	return (0);
}
