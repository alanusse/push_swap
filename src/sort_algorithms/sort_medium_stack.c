/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 09:56:43 by aglanuss          #+#    #+#             */
/*   Updated: 2024/03/27 01:03:35 by aglanuss         ###   ########.fr       */
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

int	get_position(t_list **stack_a, int num)
{
	t_list	*current;
	int			i;

	current = *stack_a;
	i = 0;
	while (current)
	{
		if (current->content == num)
			return (i);
		i++;
		current = current->next;
	}
	return (-1);
}

t_list	*get_chunk_cheapest_number(t_list **stack_a, int chunk, int chunk_size)
{
  t_list  *curr;
  t_list  *first_num;
  t_list  *last_num;
	int			lst_size;

  curr = *stack_a;
  first_num = NULL;
  last_num = NULL;
	lst_size = lstsize(stack_a);
  while (curr)
  {
    if (!first_num && curr->idx < (chunk_size * chunk))
      first_num = curr;
		if (curr->idx < (chunk_size * chunk))
			last_num = curr;
		curr = curr->next;
  }
	if (first_num == last_num)
		return (first_num);
	if (get_position(stack_a, first_num->content) < lst_size - get_position(stack_a, last_num->content))
		return (first_num);
	else
		return (last_num);
}

void	move_number(t_list **stack_a, t_list **stack_b, t_list *number)
{
	int	lst_size;
	int num_position;

	lst_size = lstsize(stack_a);
	num_position = get_position(stack_a, number->content);
	if (num_position < lst_size - num_position)
	{
		while (num_position > 0)
		{
			ra(stack_a);
			num_position--;
		}
	}
	else
	{
		while (num_position > 0)
		{
			rra(stack_a);
			num_position--;
		}
	}
	pb(stack_a, stack_b);
}

/**
 * 0
 * 1
 * 2
 * 3
 * 4 <-
 * 5
 * 6
 * 7
 * 8
 * 9
*/

void	chunks_sort(int chunks, t_list **stack_a, t_list **stack_b)
{
	int 		current_chunk;
	int 		chunk_size;
	t_list	*cheapest_number;

	current_chunk = 1;
	chunk_size = (lstsize(stack_a) / chunks);
	while (current_chunk <= chunks)
	{
		if (current_chunk == chunks)
			chunk_size += lstsize(stack_a) % chunks;
		while (contain_chunk_numbers(stack_a, current_chunk, chunk_size))
		{
			cheapest_number = get_chunk_cheapest_number(stack_a, current_chunk, chunk_size);
			move_number(stack_a, stack_b, cheapest_number);
		}
		current_chunk++;
	}
}
