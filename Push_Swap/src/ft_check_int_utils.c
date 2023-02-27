/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:27:09 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/26 23:27:09 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
