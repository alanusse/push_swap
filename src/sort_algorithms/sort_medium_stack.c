/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 09:56:43 by aglanuss          #+#    #+#             */
/*   Updated: 2024/03/28 03:18:41 by aglanuss         ###   ########.fr       */
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

static void	move_number_to_top(t_list **stack_a, t_list *number)
{
	int	lst_size;
	int position;
	int lst_middle;

	lst_size = lstsize(stack_a);
	position = get_position(stack_a, number->content);
	lst_middle = (lst_size / 2) + (lst_size % 2);
	if (position < lst_middle)
	{
		while (position > 0)
		{
			ra(stack_a);
			position--;
		}
	}
	else
	{
		while (position < lst_size)
		{
			rra(stack_a);
			position++;
		}
	}
}

int	min_idx_in_stack(t_list **stack)
{
	int			min;
	t_list	*curr;

	curr = *stack;
	min = curr->idx;
	while (curr)
	{
		if (curr->idx < min)
			min = curr->idx;
		curr = curr->next;
	}
	return (min);
}

static void	push_number(t_list **stack_a, t_list **stack_b)
{
	int	moves;

	if (lstsize(stack_b) == 0)
		pb(stack_a, stack_b);
	else
	{
		if ((*stack_a)->idx == 0 || (*stack_a)->idx < min_idx_in_stack(stack_b))
		{
			pb(stack_a, stack_b);
			rb(stack_b);
		}
		else
		{
			moves = 0;
			while ((*stack_b)->idx > (*stack_a)->idx)
			{
				rb(stack_b);
				moves++;
			}
			pb(stack_a, stack_b);
			while (--moves >= 0)
				rrb(stack_b);
		}
	}
}

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
			move_number_to_top(stack_a, cheapest_number);
			push_number(stack_a, stack_b);
		}
		current_chunk++;
	}
}
