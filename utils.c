/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:32:04 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/22 15:14:30 by aglanuss         ###   ########.fr       */
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
static int	is_valid_number(char *str)
{
	int	i;

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

/**
 * Check if string is a valid integer number.
 * 
 * If number is greater than MAX_INT or less than MIN_INT returns 0.
*/
static int	is_valid_int(char *str)
{
	long	result;

	result = ft_atol(str);
	if (result < INT_MIN || result > INT_MAX)
		return (0);
	return (1);
}

/**
 * Check if arguments are valid.
 * Returns 1 if are valid or 0 if are not valid.
*/
int	check_arguments(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (++i < argc)
	{
		if (!is_valid_number(argv[i]))
			return (0);
		if (!is_valid_int(argv[i]))
			return (0);
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) && i != j)
				return (0);
		}
		j = 0;
	}
	return (1);
}

int	is_sorted(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (i > 1 && (ft_atol(argv[i]) < ft_atol(argv[i - 1])))
			return (0);
	}
	return (1);
}
