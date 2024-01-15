/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:32:04 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/15 13:43:26 by aglanuss         ###   ########.fr       */
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
 * Check if a string contains valid numbers, positive or negative followed
 * by a space between numbers. The numbers can contain a sign.
 * 
 * Valid string: "54 -3 +2 65 -101"
 * 
 * Invalid string: "9 45-3 -1 89"
 * Invalid string: "10 k 32 90 -3"
*/
int	contain_valid_numbers(char *str)
{
	if (ft_strlen(str) == 0)
		return (0);
	while (*str)
	{
		if (*str == ' ')
			str++;
		else if (is_digit(*str))
		{
			str++;
			if (!is_digit(*str) && (*str && *str != ' '))
				return (0);
		}
		else if (*str == '-' || *str == '+')
		{
			str++;
			if (!is_digit(*str))
				return (0);
		}
		else
			return (0);
	}
	return (1);
}

/**
 * Check if arguments passed by argv are valid numbers, positive or negative.
 * A sign before a number is allowed.
 * 
 * Valid argument: 45
 * Valid argument: -10
 * Valid argument: +5
 * 
 * Invalid argument: a4
 * Invalid argument: --10
 * Invalid argument: z
*/
int	contain_valid_arguments(int argc, char **argv)
{
	int i;

	i = 0;
	while (++i < argc)
	{
		while (*argv[i])
		{
			if (is_digit(*argv[i]))
				argv[i]++;
			else if (*argv[i] == '+' || *argv[i] == '-')
			{
				argv[i]++;
				if (!is_digit(*argv[i]))
					return (0);
			}
			else
				return (0);
		}
	}
	return (1);
}