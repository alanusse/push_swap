/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:42:35 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/25 13:48:50 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "utils.h"
#include "libft.h"
#include "algorithms.h"

static t_list	*init_stack(t_list **lst, int argc, char **argv)
{
	int	i;
	t_list	*node;

	i = 0;
	while (++i < argc)
	{
		node = lstnew(ft_atoi(argv[i]));
		if (!node)
		{
			lstclear(lst);
			return (NULL);
		}
		lstadd_back(lst, node);
	}
	return (*lst);
}

static void	push_swap(t_list **stack_a)
{
	int	lst_size;

	lst_size = lstsize(stack_a);
	if (lst_size == 2)
		return (two_numbers(stack_a));
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!check_arguments(argc, argv))
		return (print_error());
	if (argc > 2 && !is_sorted(argc, argv))
	{
		if (!init_stack(&stack_a, argc, argv))
			return (print_error());
		push_swap(&stack_a);
		lstclear(&stack_a);
		lstclear(&stack_b);
	}
	return (0);
}
