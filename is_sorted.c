/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:08:40 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/22 17:12:54 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "libft.h"

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