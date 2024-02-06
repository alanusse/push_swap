/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:09:13 by aglanuss          #+#    #+#             */
/*   Updated: 2024/02/06 09:53:47 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"

static void fill_three_nums(t_list **lst, int *a, int *b, int *c)
{
  *a = get_lstitem_by_pos(lst, 0)->content;
  *b = get_lstitem_by_pos(lst, 1)->content;
  *c = get_lstitem_by_pos(lst, 2)->content;
}

void sort_three_numbers(t_list **stack_a)
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
