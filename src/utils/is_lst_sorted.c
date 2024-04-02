/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lst_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:40:41 by aglanuss          #+#    #+#             */
/*   Updated: 2024/04/02 14:09:37 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int	is_lst_sorted(t_list **lst)
{
	t_list	*current;
	t_list	*prev;

	current = *lst;
	prev = NULL;
	while (current)
	{
		if (prev && current->content < prev->content)
			return (0);
		prev = current;
		current = current->next;
	}
	return (1);
}
