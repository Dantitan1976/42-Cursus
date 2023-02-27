/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:47:13 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/26 23:45:22 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sa(int *sa)
{
	int	temporal;

	temporal = sa[0];
	sa[0] = sa[1];
	sa[1] = temporal;
	write(1, "sa\n", 3);
}
