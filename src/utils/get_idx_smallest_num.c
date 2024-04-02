/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_idx_smallest_num.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:10:33 by aglanuss          #+#    #+#             */
/*   Updated: 2024/04/02 14:06:59 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/algorithms.h"

/**
 * Find index of smallest number of the stack.
 */
int	get_idx_smallest_num(t_list **stack)
{
	t_list	*current;
	int		smallest_idx;
	int		i;

	smallest_idx = 0;
	current = *stack;
	i = 0;
	while (current)
	{
		if (current->content < get_lst_content_by_idx(stack, smallest_idx))
			smallest_idx = i;
		current = current->next;
		i++;
	}
	return (smallest_idx);
}
