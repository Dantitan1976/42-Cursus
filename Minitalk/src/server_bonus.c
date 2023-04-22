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
	static int	posicion = 0;
	static char	char_env = 0;
	static int	pid_cliente = 0;

	(void)mychurra;
	if (!pid_cliente)
		pid_cliente = info->si_pid;
	if (sig_cliente == SIGUSR1)
		char_env |= (1 << posicion);
	posicion++;
	if (posicion == 8)
	{
		ft_printf("%c", char_env);
		kill(pid_cliente, SIGUSR2);
		posicion = 0;
		char_env = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	estructura;
	int					pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("\033[0;91mError. El servidor no maneja argumentos\n");
		ft_printf("Se introducen en el cliente\033[0;39m\n");
		ft_printf("Escriba ./server\033[0;39m\n");
		return (0);
	}
	pid = getpid();
	ft_printf("PID del servidor: %d\n", pid);
	ft_printf("Esperando mensaje...\n");
	estructura.sa_sigaction = ft_handler;
	estructura.sa_flags = SA_RESTART;
	//sigaction(SIGUSR1, &estructura, NULL);
	//sigaction(SIGUSR2, &estructura, NULL);
	while (argc == 1)
	{
		sigaction(SIGUSR1, &estructura, NULL);
		sigaction(SIGUSR2, &estructura, NULL);
		pause();
	}
	return (0);
}
