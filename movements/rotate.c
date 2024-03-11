/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:51:39 by aglanuss          #+#    #+#             */
/*   Updated: 2024/03/11 23:22:40 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/movements.h"

static void	reverse(t_list **stack)
{
	t_list	*current;
	t_list	*first;

	if (lstsize(stack) < 2)
		return ;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = first;
}

void	ra(t_list **stack_a)
{
	reverse(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	reverse(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	reverse(stack_a);
	reverse(stack_b);
	write(1, "rr\n", 3);
}
