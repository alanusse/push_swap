/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 09:56:43 by aglanuss          #+#    #+#             */
/*   Updated: 2024/03/22 00:33:11 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/movements.h"

int	contain_chunk_numbers(t_list **stack, int chunk, int chunk_size)
{
	t_list	*curr;
	int			chunk_min;
	int			chunk_max;

	curr = *stack;
	chunk_min = chunk * chunk_size - chunk_size;
	chunk_max = chunk * chunk_size - 1;
	while (curr)
	{
		if (curr->idx >= chunk_min && curr->idx <= chunk_max)
			return (1);
		curr = curr->next;
	}
	return (0);
}

void	move_chunk_numbers(t_list **stack_a, int chunk, int chunk_size)
{
	int			first_num;
	int			second_num;
	int			chunk_min;
	int			chunk_max;
	int			i;
	t_list	*curr;

	first_num = -1;
	second_num = -1;
	chunk_min = chunk * chunk_size - chunk_size;
	chunk_max = chunk * chunk_size - 1;
	i = 0;
	curr = *stack_a;
	while (first_num == -1 && curr)
	{
		if (curr->idx >= chunk_min && curr->idx <= chunk_max)
			first_num = i;
		curr = curr->next;
		i++;
	}
}

void	chunks_sort(int chunks, t_list **stack_a)
{
	int chunk_size;
	int current_chunk;

	chunk_size = (lstsize(stack_a) / chunks);
	current_chunk = 1;
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
