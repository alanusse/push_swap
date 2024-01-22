/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_movements.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:07:37 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/22 19:27:44 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void  sa(t_list **stack_a)
{
  t_list  *first;
  t_list  *second;

  if (lstsize(stack_a) < 2)
    return ;
  first = *stack_a;
  second = (*stack_a)->next;
  first->next = second->next; 
  second->next = first;
  *stack_a = second;
  write(1, "sa\n", 3);
}

void  pa(t_list **stack_a, t_list **stack_b)
{
  t_list  *tmp;

  if (lstsize(stack_b) == 0)
    return ;
  tmp = *stack_b;
  *stack_b = (*stack_b)->next;
  tmp->next = *stack_a;
  *stack_a = tmp;
  write(1, "pa\n", 3);
}
