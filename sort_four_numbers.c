/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:14:06 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/31 23:52:31 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"

/**
 * Find index of biggest number of the stack.
*/
static int  get_idx_biggest_num(t_list **stack_a)
{
  t_list  *current;
  int     biggest_idx;
  int     i;

  biggest_idx = 0;
  current = *stack_a;
  i = 0;
  while (current)
  {
    if (current->content > get_lst_content_by_idx(stack_a, biggest_idx))
      biggest_idx = i;
    current = current->next;
    i++;
  }
  return (biggest_idx);
}

void  sort_four_numbers(t_list **stack_a, t_list **stack_b)
{
  int biggest_num_idx;

  biggest_num_idx = get_idx_biggest_num(stack_a);
  if (biggest_num_idx == 0)
    pb(stack_a, stack_b);
  else if (biggest_num_idx == 1)
  {
    sa(stack_a);
    pb(stack_a, stack_b);
  }
  else if (biggest_num_idx == 2)
  {
    rra(stack_a);
    rra(stack_a);
    pb(stack_a, stack_b);
  }
  else if (biggest_num_idx == 3)
  {
    rra(stack_a);
    pb(stack_a, stack_b);
  }
  sort_three_numbers(stack_a);
  pa(stack_a, stack_b);
  ra(stack_a);
}
