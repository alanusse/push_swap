/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:50:44 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/22 17:52:42 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H
# include <stdlib.h>

typedef struct s_list
{
	int					content;
	struct s_list		*next;
}	t_list;

t_list	*lstnew(int content);
void	lstadd_back(t_list **lst, t_list *new);
void	lstclear(t_list **lst);

#endif