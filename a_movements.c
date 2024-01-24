/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_movements.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:07:37 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/24 01:56:19 by aglanuss         ###   ########.fr       */
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

void  ra(t_list **stack_a)
{
  t_list  *current;
  t_list  *first;

  if (lstsize(stack_a) < 2)
    return ;
  first = *stack_a;
  *stack_a = first->next;
  first->next = NULL;
  current = *stack_a;
  while (current->next)
    current = current->next;
  current->next = first;
  write(1, "ra\n", 3);
}

void  rra(t_list **stack_a)
{
  t_list  *current;

  if (lstsize(stack_a) < 2)
    return ;

  current = *stack_a;
  while (current->next->next)
    current = current->next;
  current->next->next = *stack_a;
  *stack_a = current->next;
  current->next = NULL;
  write(1, "rra\n", 4);
}