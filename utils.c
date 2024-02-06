/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:58:18 by aglanuss          #+#    #+#             */
/*   Updated: 2024/02/06 09:52:30 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int is_lst_sorted(t_list **lst)
{
  t_list  *current;
  t_list  *prev;

  current = *lst;
  prev = NULL;
  while (current)
  {
    if (prev && current->content < prev->content)
      return (0);
    prev = current;
    current = current->next;
  }
  return (1);
}

t_list   *get_lstitem_by_pos(t_list **lst, int idx)
{
  int     i;
  t_list  *current;

  if (!lst || !*lst)
    return (NULL);
  i = 0;
  current = *lst;
  while(i <= idx && current)
  {
    if (i == idx)
      return (current);
    i++;
    current = current->next;
  }
  return (NULL);
}
