/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:30:43 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/22 15:11:28 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <unistd.h>
# include <limits.h>

int		print_error(void);
int		check_arguments(int argc, char **argv);
long	ft_atol(const char *str);
int		is_sorted(int argc, char **argv);

#endif