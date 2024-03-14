/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:55:16 by aglanuss          #+#    #+#             */
/*   Updated: 2024/03/13 13:54:56 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

t_list	*lstnew(int content, int idx)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->idx = idx;
	node->next = NULL;
	return (node);
}

void	lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (*lst)
	{
		current = *lst;
		while (current->next)
			current = current->next;
		current->next = new;
	}
	else
		*lst = new;
}

void	lstclear(t_list **lst)
{
	t_list	*tmp;

	while (*lst && lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
}

int	lstsize(t_list **lst)
{
	int			count;
	t_list		*current;

	count = 0;
	current = *lst;
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
