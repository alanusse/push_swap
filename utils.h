/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:30:43 by aglanuss          #+#    #+#             */
/*   Updated: 2024/02/06 09:52:05 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <unistd.h>
# include <limits.h>
# include "lists.h"

int		error_exit(void);
int		check_arguments(int argc, char **argv);
int		is_arguments_sorted(int argc, char **argv);
int   is_lst_sorted(t_list **lst);
t_list   *get_lstitem_by_pos(t_list **lst, int idx);

#endif