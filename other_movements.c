/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_movements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:13:55 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/24 01:57:26 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "movements.h"

void  ss(t_list **stack_a, t_list **stack_b)
{
  sa(stack_a);
  sb(stack_b);
}

void  rr(t_list **stack_a, t_list **stack_b)
{
  ra(stack_a);
  rb(stack_b);
}

void  rrr(t_list **stack_a, t_list **stack_b)
{
  rra(stack_a);
  rrb(stack_b);
}