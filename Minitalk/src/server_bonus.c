/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:39:13 by dramirez          #+#    #+#             */
/*   Updated: 2023/04/14 19:39:13 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	ft_handler(int sig_cliente, siginfo_t *info, void *mychurra)
{
	static int	posicion;
	static char	char_env;
	static int	pid_cliente;

	(void)mychurra;
	pid_cliente = info->si_pid;
	if (sig_cliente == SIGUSR1)
		char_env |= (1 << posicion);
	posicion++;
	if (posicion == 8)
	{
		if (posicion == '\0')
		{
			ft_printf("\n");
			kill(pid_cliente, SIGUSR2);
			posicion = 0;
			char_env = 0;
		}
		ft_printf("%c", char_env);
		kill(pid_cliente, SIGUSR1);
		posicion = 0;
		char_env = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	estructura;
	int					pid;

	(void)argv;
	estructura.sa_sigaction = ft_handler;
	estructura.sa_flags = SA_RESTART;
	if (argc > 1)
	{
		ft_printf("Error. El servidor no maneja argumentos\n");
		ft_printf("Se introducen en el cliente");
		return (0);
	}
	pid = getpid();
	ft_printf("PID del servidor: %d\n", pid);
	sigaction(SIGUSR1, &estructura, NULL);
	sigaction(SIGUSR2, &estructura, NULL);
	while (1)
	{
		pause();
	}
	return (0);
}
