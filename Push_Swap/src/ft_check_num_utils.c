/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_num_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:37:06 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/26 23:37:06 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_atoi(const char *nptr)
{
	int	cont;
	int	signo;
	int	numeros;

	cont = 0;
	signo = 0;
	numeros = 0;
	while (nptr[cont] != '\0' && (nptr[cont] == ' '
			|| (nptr[cont] >= 9 && nptr[cont] <= 13)))
		cont++;
	if (nptr[cont] != '\0' && nptr[cont] == '-')
	{
		signo = 1;
		cont++;
	}
	else if (nptr[cont] == '+')
		cont++;
	while (nptr[cont] != '\0' && (nptr[cont] >= '0' && nptr[cont] <= '9'))
	{
			numeros = (numeros * 10) + (nptr[cont] - '0');
			cont++;
	}
	if (signo == 1)
		return (-numeros);
	return (numeros);
}
/*Split del Libft*/
size_t	ft_contpalab(char *s, char c)
{
	size_t	numpalab;
	size_t	pos;

	if (!s || !ft_strlen(s))
		return (0);
	pos = 0;
	numpalab = s[pos] != c;
	while (s[pos])
	{
		numpalab += (s[pos] == c && s[pos + 1] != c && s[pos + 1] != '\0');
		pos++;
	}
	return (numpalab);
}

int	ft_longpalab(char const *cadena, int posicion, char separador)
{
	int	contador;

	contador = 0;
	while (cadena[posicion])
	{
		if (cadena[posicion] == separador || cadena[posicion] == '\0')
			return (contador);
		posicion++;
		contador++;
	}
	return (contador);
}

char	**ft_split(char const *s, char c)
{
	char	**tabla;
	size_t	pos1;
	size_t	filas;
	size_t	total_long;

	tabla = ft_calloc(ft_contpalab((char *)s, c) + 1, sizeof(char *));
	if (!tabla || !s)
		return (NULL);
	filas = 0;
	pos1 = 0;
	while (filas < ft_contpalab((char *)s, c))
	{
		while (s[pos1] == c)
			pos1++;
		total_long = ft_longpalab(s, pos1, c);
		tabla[filas] = ft_substr(s, pos1, total_long);
		pos1 += total_long;
		filas++;
		pos1++;
	}
	return (tabla);
}
//Fin split libft
/*Contamos el número de separadores en la cadena*/
int	ft_numseparad(char *cadena, char separador)
{
	int	cont_cadena;
	int	cont_separador;

	cont_cadena = 0;
	cont_separador = 0;
	while (cadena[cont_cadena])
	{
		if (cadena[cont_cadena] != separador)
		{
			cont_separador++;
			while (cadena[cont_cadena] && cadena[cont_cadena] != separador)
				cont_cadena++;
			if (cadena[cont_cadena] == '\0')
				return (cont_separador);
		}
		cont_cadena++;
	}
	return (cont_separador);
}
