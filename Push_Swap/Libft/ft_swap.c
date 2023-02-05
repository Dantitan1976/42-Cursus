/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:32:45 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/04 15:57:08 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(int *argv1, int *argv2)
{
	int	temporal;

	temporal = *argv1;
	*argv1 = *argv2;
	*argv2 = temporal;
}
