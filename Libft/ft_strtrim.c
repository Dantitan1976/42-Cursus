/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:56:48 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/12 20:20:27 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cadrec;
	size_t	cont_s1;
	size_t	tam_cadrec;

	tam_cadrec = ft_strlen(s1) - ft_strlen(set) + 1;
	cadrec = (char *) malloc(tam_cadrec * sizeof(char));
	if (!cadrec)
		return (NULL);
	cont_s1 = 0;
	while (s1[cont_s1] && ft_strchr(set, s1[cont_s1]))
		cont_s1++;
	if (cadrec)
		ft_strlcpy(cadrec, set, tam_cadrec);
	cadrec[cont_s1] = '\0';
	return (cadrec);
}
