/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:14:41 by aglanuss          #+#    #+#             */
/*   Updated: 2024/03/13 11:14:43 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/algorithms.h"

static void fill_three_nums(t_list **lst, int *a, int *b, int *c)
{
  *a = get_lst_content_by_idx(lst, 0);
  *b = get_lst_content_by_idx(lst, 1);
  *c = get_lst_content_by_idx(lst, 2);
}

static void sort_three_numbers(t_list **stack_a)
{
  int a;
  int b;
  int c;

  fill_three_nums(stack_a, &a, &b, &c);
  if (a > c && !is_lst_sorted(stack_a))
    ra(stack_a);
  fill_three_nums(stack_a, &a, &b, &c);
  if (b > a && !is_lst_sorted(stack_a))
    sa(stack_a);
  fill_three_nums(stack_a, &a, &b, &c);
  if (a > c && !is_lst_sorted(stack_a))
    ra(stack_a);
  fill_three_nums(stack_a, &a, &b, &c);
  if (a > b && !is_lst_sorted(stack_a))
    sa(stack_a);
}

static void  sort_four_numbers(t_list **stack_a, t_list **stack_b)
{
  int smallest_num_idx;

  smallest_num_idx = get_idx_smallest_num(stack_a);
  if (smallest_num_idx == 1)
    sa(stack_a);
  else if (smallest_num_idx == 2)
  {
    rra(stack_a);
    rra(stack_a);
  }
  else if (smallest_num_idx == 3)
    rra(stack_a);
  pb(stack_a, stack_b);
  sort_three_numbers(stack_a);
  pa(stack_a, stack_b);
}

static void	sort_five_numbers(t_list **stack_a, t_list **stack_b)
{
	int smallest_num_idx;

	smallest_num_idx = get_idx_smallest_num(stack_a);
	if (smallest_num_idx == 1)
		sa(stack_a);
	else if (smallest_num_idx == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (smallest_num_idx == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (smallest_num_idx == 4)
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