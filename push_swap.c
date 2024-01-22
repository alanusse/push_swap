/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:42:35 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/22 15:15:39 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"
#include "./utils.h"
#include "./libft.h"

int	main(int argc, char **argv)
{
	if (!check_arguments(argc, argv))
		return (print_error());
	return (0);
}
