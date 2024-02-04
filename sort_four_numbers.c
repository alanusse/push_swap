/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:14:06 by aglanuss          #+#    #+#             */
/*   Updated: 2024/02/04 00:52:15 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"

/**
 * Find index of biggest number of the stack.
*/
static int  get_idx_smallest_num(t_list **stack_a)
{
  t_list  *current;
  int     smallest_idx;
  int     i;

  smallest_idx = 0;
  current = *stack_a;
  i = 0;
  while (current)
  {
    if (current->content < get_lst_content_by_idx(stack_a, smallest_idx))
      smallest_idx = i;
    current = current->next;
    i++;
  }
  return (smallest_idx);
}

void  sort_four_numbers(t_list **stack_a, t_list **stack_b)
{
  int smallest_num_idx;

  smallest_num_idx = get_idx_smallest_num(stack_a);
  if (smallest_num_idx == 0)
    pb(stack_a, stack_b);
  else if (smallest_num_idx == 1)
  {
    sa(stack_a);
    pb(stack_a, stack_b);
  }
  else if (smallest_num_idx == 2)
  {
    rra(stack_a);
    rra(stack_a);
    pb(stack_a, stack_b);
  }
  else if (smallest_num_idx == 3)
  {
    rra(stack_a);
    pb(stack_a, stack_b);
  }
  sort_three_numbers(stack_a);
  pa(stack_a, stack_b);
}
