/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:49:23 by aglanuss          #+#    #+#             */
/*   Updated: 2024/04/01 17:26:28 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/algorithms.h"

/*	Pushes all the elements of stack a into stack b, except the three last.
	Smaller values first, then the larger values to help with efficiency.*/

static void	push_init(t_list **stack_a, t_list **stack_b)
{
	int	stack_size;
	int	pushes;
	int	i;

	stack_size = lstsize(stack_a);
	pushes = 0;
	i = 0;
	while (stack_size > 6 && i < stack_size && pushes < stack_size / 2)
	{
		if ((*stack_a)->idx <= stack_size / 2)
		{
			pb(stack_a, stack_b);
			pushes++;
		}
		else
			ra(stack_a);
		i++;
	}
	while (stack_size - pushes > 3)
	{
		pb(stack_a, stack_b);
		pushes++;
	}
}

/*	The stack a is almost sorted, rotate stack a until the lowest
	value is at the top. If it is in the bottom half of the stack, reverse
	rotate, otherwise rotate until it is at the top. */

static void	sort_stack(t_list **stack_a)
{
	int	lowest_p;
	int	stack_size;

	stack_size = lstsize(stack_a);
	lowest_p = position_lowest_index(stack_a);
	if (lowest_p > stack_size / 2)
	{
		while (lowest_p < stack_size)
		{
			rra(stack_a);
			lowest_p++;
		}
	}
	else
	{
		while (lowest_p > 0)
		{
			ra(stack_a);
			lowest_p--;
		}
	}
}

/*	Sorting algorithm for a stack larger than 3.
	 Push everything but 3 numbers to stack B.
	 Sort the 3 numbers left in stack A.
	 Calculate the most cost-effective move.
	 Shift elements until stack A is in order. */

void	sort_large_stack(t_list **stack_a, t_list **stack_b)
{
	push_init(stack_a, stack_b);
	sort_small_stack(stack_a, stack_b);
	while (*stack_b)
	{
		get_target_position(stack_a, stack_b);
		cost(stack_a, stack_b);
		cheapest_move(stack_a, stack_b);
	}
	if (!is_sorted(*stack_a))
		sort_stack(stack_a);
}
