/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:32:04 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/22 12:49:26 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"
#include "./libft.h"

/**
 * Print "Error" on standard output and return 0.
*/
int	print_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

/**
 * Check if string is a valid number.
 * 
 * Valid examples:
 * - 43
 * - -92
 * 
 * Invalid examples:
 * - --43
 * - 2-34
 * - 5f89
 * - +90
*/
int is_valid_number(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (!ft_strchr("-0123456789", str[i]))
			return (0);
		if (i > 0 && !ft_strchr("0123456789", str[i]))
			return (0);
	}
	return (1);
}
