/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:42:35 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/22 19:25:06 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "utils.h"
#include "lists.h"
#include "libft.h"
#include "movements.h"

t_list	*init_stack(t_list **lst, int argc, char **argv)
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

#include <printf.h>
void print_list(t_list **lst, char *name)
{
	t_list *current;

	current = *lst;
	printf("%s\n", name);
	while (current)
	{
		printf("%i\n", current->content);
		current = current->next;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (!check_arguments(argc, argv))
		return (print_error());
	if (argc > 2 && !is_sorted(argc, argv))
	{
		if (!init_stack(&stack_a, argc, argv))
			return (print_error());
		print_list(&stack_a, "stack a:");
		print_list(&stack_b, "stack b:");
		pb(&stack_a, &stack_b);
		// sb(&stack_b);
		print_list(&stack_a, "stack a:");
		print_list(&stack_b, "stack b:");
	}
	lstclear(&stack_a);
	lstclear(&stack_b);
	return (0);
}
