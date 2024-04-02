/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:30:43 by aglanuss          #+#    #+#             */
/*   Updated: 2024/04/02 14:05:23 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <unistd.h>
# include <limits.h>
# include "lists.h"
# include "movements.h"

int				ft_isdigit(int c);
size_t			ft_strlen(char *s);
char			*ft_strchr(char *s, int c);
int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(const char *str);
long			ft_atol(const char *str);
int				error_exit(void);
int				check_arguments(int argc, char **argv);
int				is_arguments_sorted(int argc, char **argv);
int				is_lst_sorted(t_list **lst);
int				get_lst_content_by_idx(t_list **lst, int idx);
int				get_idx_smallest_num(t_list **stack);
void			cost(t_list **stack_a, t_list **stack_b);
void			cheapest_move(t_list **stack_a, t_list **stack_b);
int				position_lowest_index(t_list **stack);
void			get_target_position(t_list **stack_a, t_list **stack_b);
void			do_move(t_list **a, t_list **b, int cost_a, int cost_b);
int				is_sorted(t_list *stack);

#endif