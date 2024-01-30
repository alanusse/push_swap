/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:14:06 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/30 14:10:06 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"

void  sort_four_numbers(t_list **stack_a)
{
  int *nums;
  int biggest;

  nums = NULL;
  if (!nums)
    error_exit();
  biggest = get_lst_bigger_content(stack_a);

}
