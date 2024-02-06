/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:09:28 by aglanuss          #+#    #+#             */
/*   Updated: 2024/02/06 09:42:27 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "libft.h"

static int	is_valid_int(char *str)
{
	long	result;

	result = ft_atol(str);
	if (result < INT_MIN || result > INT_MAX)
		return (0);
	return (1);
}

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
// TODO: enhance validation
// TODO: like check 0001 is 1, check +1 is 1, 2^64 fails
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
