/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:49:19 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/24 12:19:32 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

static void  push(t_list **stack_a, t_list **stack_b)
{
  t_list  *tmp;

  if (lstsize(stack_b) == 0)
    return ;
  tmp = *stack_b;
  *stack_b = (*stack_b)->next;
  tmp->next = *stack_a;
  *stack_a = tmp;
}

void  pa(t_list **stack_a, t_list **stack_b)
{
  push(stack_a, stack_b);
  write(1, "pa\n", 3);
}

void  pb(t_list **stack_a, t_list **stack_b)
{
  push(stack_b, stack_a);
  write(1, "pb\n", 3);
}
