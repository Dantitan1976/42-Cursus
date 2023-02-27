/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:09:30 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/26 23:45:39 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sb(int *sb)
{
	int	temporal;

	temporal = sb[0];
	sb[0] = sb[1];
	sb[1] = temporal;
	write(1, "sb\n", 3);
}
