/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:47:33 by dramirez          #+#    #+#             */
/*   Updated: 2023/02/22 20:39:13 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

//ft_check_int_utils.c
void		ft_putstr_fd(char *s, int fd);
void		ft_error(void);
//ft_check_int.c
char		ft_check_num(char *str);
long int	ft_check_int(char *str);
char		ft_check_dobles_int(int argc, char **argv);
void		ft_check_args_int(int argc, char **argv);
//ft_check_num_utils.c
int			ft_atoi(const char *nptr);
size_t		ft_contpalab(char *s, char c);
int			ft_longpalab(char const *cadena, int posicion, char separador);
char		**ft_split(char const *s, char c);
int			ft_numseparad(char *cadena, char separador);
//ft_check_num_utils2.c
size_t		ft_strlen(const char *s);
void		*ft_calloc(size_t nmemb, size_t size);
//ft_check_num.c
//char		ft_check_num(char *str);
char		ft_check_dobles(int argc, char **argv);
//void		ft_putstr_fd(char *s, int fd);
//void		ft_error(void);
void		ft_check_args(int argc, char **argv);

#endif
