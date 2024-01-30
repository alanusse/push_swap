/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:21:48 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/30 14:11:30 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"

/**
 * Sort stack up to 4 numbers.
*/
void  sort_small_stack(t_list **stack_a)
{
  if (lstsize(stack_a) == 2)
    return (ra(stack_a));
  if (lstsize(stack_a) == 3)
    return (sort_three_numbers(stack_a));
  if (lstsize(stack_a) == 4)
    return (sort_four_numbers(stack_a));
  // todo: algorithm for 5 numbers
}