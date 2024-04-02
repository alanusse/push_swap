/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lst_content_by_idx.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:41:43 by aglanuss          #+#    #+#             */
/*   Updated: 2024/04/02 14:10:03 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int	get_lst_content_by_idx(t_list **lst, int idx)
{
	int		i;
	t_list	*current;

	if (!lst || !*lst)
		return (0);
	i = 0;
	current = *lst;
	while (i <= idx && current)
	{
		if (i == idx)
			return (current->content);
		i++;
		current = current->next;
	}
	return (0);
}
