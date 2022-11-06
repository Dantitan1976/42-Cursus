/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:41:33 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/06 11:04:04 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ultimo;

	if (!lst || !new)
		return ;
	else if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ultimo = ft_lstlast(*lst);
	new->next = ultimo->next;
	ultimo->next = new;
}
