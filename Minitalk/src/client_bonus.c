/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 01:16:07 by dramirez          #+#    #+#             */
/*   Updated: 2023/04/23 01:16:07 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	ft_handler_client(int sig_cliente)
{
	static int	signal = 0;

	if (sig_cliente == SIGUSR1)
		signal++;
	else if (sig_cliente == SIGUSR2)
		{
			ft_printf("\033[1;92mMensaje recibido.\033[0;39m\n");
			exit(0);
		}
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

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		posicion = 0;
		signal(SIGUSR1, ft_handler_client);
		signal(SIGUSR2, ft_handler_client);
		while (argv[2][posicion] != '\0')
		{
			ft_char_signal(argv[2][posicion], pid);
			posicion++;
		}
		ft_char_signal('\n', pid);
	}
	else if (argc != 3 || ft_strlen(argv[2]) == 0)
	{
		ft_printf("\033[0;91mError. Introduzca PID y un mensaje\033[0;39m\n");
		return (1);
	}
	return (0);
}
