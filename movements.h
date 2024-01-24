/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:07:53 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/24 11:54:02 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVEMENTS_H
# define MOVEMENTS_H
# include "lists.h"
# include "unistd.h"

/**
 * Swap moves
*/
void  sa(t_list **stack_a);
void  sb(t_list **stack_b);
void  ss(t_list **stack_a, t_list **stack_b);

/**
 * Push moves
*/
void  pa(t_list **stack_a, t_list **stack_b);
void  pb(t_list **stack_a, t_list **stack_b);

/**
 * Rotate moves
*/
void  ra(t_list **stack_a);
void  rb(t_list **stack_b);
void  rr(t_list **stack_a, t_list **stack_b);

/**
 * Reverse rotate moves
*/
void  rra(t_list **stack_a);
void  rrb(t_list **stack_b);
void  rrr(t_list **stack_a, t_list **stack_b);

#endif