/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:21:48 by aglanuss          #+#    #+#             */
/*   Updated: 2024/02/06 09:53:05 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"

/**
 * Find index of smallest number of the stack.
*/
static int  get_smallest_num_pos(t_list **stack)
{
  t_list  *current;
  int     smallest_idx;
  int     i;

  smallest_idx = 0;
  current = *stack;
  i = 0;
  while (current)
  {
    if (current->content < get_lstitem_by_pos(stack, smallest_idx)->content)
      smallest_idx = i;
    current = current->next;
    i++;
  }
  return (smallest_idx);
}

static void  sort_four_numbers(t_list **stack_a, t_list **stack_b)
{
  int smallest_num_pos;

  smallest_num_pos = get_smallest_num_pos(stack_a);
  if (smallest_num_pos == 1)
    sa(stack_a);
  else if (smallest_num_pos == 2)
  {
    rra(stack_a);
    rra(stack_a);
  }
  else if (smallest_num_pos == 3)
    rra(stack_a);
  pb(stack_a, stack_b);
  sort_three_numbers(stack_a);
  pa(stack_a, stack_b);
}

static void	sort_five_numbers(t_list **stack_a, t_list **stack_b)
{
	int smallest_num_pos;

	smallest_num_pos = get_smallest_num_pos(stack_a);
	if (smallest_num_pos == 1)
		sa(stack_a);
	else if (smallest_num_pos == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (smallest_num_pos == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (smallest_num_pos == 4)
		rra(stack_a);
	pb(stack_a, stack_b);
	sort_four_numbers(stack_a, stack_b);
	pa(stack_a, stack_b);
}

/**
 * Sort stack up to 5 numbers.
*/
void  sort_small_stack(t_list **stack_a, t_list **stack_b)
{
  int lst_size;

  lst_size = lstsize(stack_a);
  if (lst_size == 2)
    return (ra(stack_a));
  if (lst_size == 3)
    return (sort_three_numbers(stack_a));
  if (lst_size == 4)
    return (sort_four_numbers(stack_a, stack_b));
  if (lst_size == 5)
    return (sort_five_numbers(stack_a, stack_b));
}