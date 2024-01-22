/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:41:44 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/22 14:28:44 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int	ft_isdigit(int c);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
int ft_strcmp(char *s1, char *s2);

#endif