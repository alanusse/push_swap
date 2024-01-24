/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_movements.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:14:30 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/24 01:55:41 by aglanuss         ###   ########.fr       */
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


void  rb(t_list **stack_b)
{
  t_list  *current;
  t_list  *first;

  if (lstsize(stack_b) < 2)
    return ;
  first = *stack_b;
  *stack_b = first->next;
  first->next = NULL;
  current = *stack_b;
  while (current->next)
    current = current->next;
  current->next = first;
  write(1, "rb\n", 3);
}

void  rrb(t_list **stack_b)
{
  t_list  *current;

  if (lstsize(stack_b) < 2)
    return ;

  current = *stack_b;
  while (current->next->next)
    current = current->next;
  current->next->next = *stack_b;
  *stack_b = current->next;
  current->next = NULL;
  write(1, "rrb\n", 4);
}