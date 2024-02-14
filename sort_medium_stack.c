/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 09:56:43 by aglanuss          #+#    #+#             */
/*   Updated: 2024/02/11 22:10:08 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"



void  sort_medium_stack(t_list **stack_a)
{
  int chunk;
  int num;
  int lst_size;

  lst_size = lstsize(stack_a);
  chunk = 1;
  while (chunk <= 5)
  {
    num = (lst_size / 5) * chunk;
    if (chunk == 5)
      num += lst_size % 5;
    while (num > num - (lst_size / 5))
    {
      num--;
    }
    chunk++;
  }
}
