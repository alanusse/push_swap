/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:42:35 by aglanuss          #+#    #+#             */
/*   Updated: 2024/03/11 19:12:21 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"
#include "./includes/utils.h"
#include "./includes/algorithms.h"

static t_list	*init_stack(t_list **lst, int argc, char **argv)
{
	int	i;
	t_list	*new;

	i = 0;
	while (++i < argc)
	{
		new = lstnew(ft_atoi(argv[i]));
		if (!new)
		{
			lstclear(lst);
			return (NULL);
		}
		lstadd_back(lst, new);
	}
	return (*lst);
}

static void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	lst_size;

	lst_size = lstsize(stack_a);
	if (lst_size <= 5)
		return (sort_small_stack(stack_a, stack_b));
	else if (lst_size > 5 && lst_size < 500)
		return (sort_medium_stack(stack_a));
	
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!check_arguments(argc, argv))
		return (error_exit());
	if (argc > 2 && !is_arguments_sorted(argc, argv))
	{
		if (!init_stack(&stack_a, argc, argv))
			return (error_exit());
		push_swap(&stack_a, &stack_b);
		lstclear(&stack_a);
		lstclear(&stack_b);
	}
	return (0);
}
