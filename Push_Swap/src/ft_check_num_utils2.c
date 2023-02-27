/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_num_utils2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:56:31 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/27 00:56:31 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	contador;

	contador = 0;
	while (s[contador] != '\0')
		contador++;
	return (contador);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*resultado;

	resultado = malloc (nmemb * size);
	if (!resultado)
		return (NULL);
	ft_bzero(resultado, (nmemb * size));
	return (resultado);
}
