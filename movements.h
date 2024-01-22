/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:07:53 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/22 19:12:13 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVEMENTS_H
# define MOVEMENTS_H
# include "lists.h"
# include "unistd.h"

void  sa(t_list **stack_a);
void  sb(t_list **stack_b);
void  pa(t_list **stack_a, t_list **stack_b);
void  pb(t_list **stack_a, t_list **stack_b);

#endif