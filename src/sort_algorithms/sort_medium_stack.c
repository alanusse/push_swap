/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 09:56:43 by aglanuss          #+#    #+#             */
/*   Updated: 2024/03/26 14:12:08 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/movements.h"

int	contain_chunk_numbers(t_list **stack, int chunk, int chunk_size)
{
	t_list	*curr;

	curr = *stack;
	while (curr)
	{
		if (curr->idx < chunk_size * chunk)
			return (1);
		curr = curr->next;
	}
	return (0);
}

// void	move_chunk_numbers(t_list **stack_a, int chunk, int chunk_size)
// {
// 	int			first_num;
// 	int			second_num;
// 	int			i;
// 	t_list	*curr;

// 	first_num = -1;
// 	second_num = -1;
// 	i = 0;
// 	curr = *stack_a;
// 	while (first_num == -1 && curr)
// 	{
// 		if (curr->idx >= chunk_min && curr->idx <= chunk_max)
// 			first_num = i;
// 		curr = curr->next;
// 		i++;
// 	}
// }

void  get_cheapest_number(t_list **stack_a, int chunk, int chunk_size)
{
  t_list  *curr;
  t_list  *first_num;
  t_list  *last_num;

  curr = *stack_a;
  first_num = NULL;
  last_num = NULL;
  while (curr)
  {
    if (first_num == NULL && curr->idx < (chunk_size * chunk))
      first_num = curr;
    if (first_num && curr->idx < (chunk_size * chunk))
      last_num = curr;
    curr = curr->next;
  }
  if (last_num)
}

void	chunks_sort(int chunks, t_list **stack_a)
{
	int current_chunk;
	int chunk_size;

	current_chunk = 1;
	chunk_size = (lstsize(stack_a) / chunks);
	while (current_chunk <= chunks)
	{
		if (current_chunk == chunks)
			chunk_size += lstsize(stack_a) % chunks;
		while (contain_chunk_numbers(stack_a, current_chunk, chunk_size))
		{
			// check cost and do it
		}
		current_chunk++;
	}
}
