/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_movements.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:14:30 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/22 19:27:48 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void  sb(t_list **stack_b)
{
  t_list  *first;
  t_list  *second;

  if (lstsize(stack_b) < 2)
    return ;
  first = *stack_b;
  second = (*stack_b)->next;
  first->next = second->next; 
  second->next = first;
  *stack_b = second;
  write(1, "sb\n", 3);
}

void  pb(t_list **stack_a, t_list **stack_b)
{
  t_list  *tmp;

  if (lstsize(stack_a) == 0)
    return ;
  tmp = *stack_a;
  *stack_a = (*stack_a)->next;
  tmp->next = *stack_b;
  *stack_b = tmp;
  write(1, "pb\n", 3);
}