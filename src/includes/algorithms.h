/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:21:59 by aglanuss          #+#    #+#             */
/*   Updated: 2024/04/01 12:53:18 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHMS_H
# define ALGORITHMS_H
# include "movements.h"
# include "utils.h"

void  sort_small_stack(t_list **stack_a, t_list **stack_b);
void	sort_large_stack(t_list **stack_a, t_list **stack_b);

#endif