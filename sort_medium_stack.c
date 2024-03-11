/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 09:56:43 by aglanuss          #+#    #+#             */
/*   Updated: 2024/03/11 19:13:39 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/movements.h"

void  sort_medium_stack(t_list **stack_a)
{
  int chunk;
  int num;
  int num_limit;
  int lst_size;

  lst_size = lstsize(stack_a);
  chunk = 1;
  while (chunk <= 5)
  {
    num = (lst_size / 5) * chunk - (lst_size / 5);
    num_limit = (lst_size / 5) * chunk;
    if (chunk == 5)
      num_limit += (lst_size % 5);
    while (num < num_limit)
    {
      // TODO: check cost of movement and do it
      num++;
    }
    chunk++;
  }
}
