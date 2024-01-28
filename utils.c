/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:58:18 by aglanuss          #+#    #+#             */
/*   Updated: 2024/01/28 18:35:52 by aglanuss         ###   ########.fr       */
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

int get_lst_content_by_idx(t_list **lst, int idx)
{
  int     i;
  t_list  *current;

  if (!lst || !*lst)
    return (0);
  i = 0;
  current = *lst;
  while(i <= idx && current)
  {
    if (i == idx)
      return (current->content);
    i++;
    current = current->next;
  }
  return (0);
}

int get_lst_bigger_content(t_list **lst)
{
  int     biggest;
  t_list  *current;

  if (!lst | !*lst)
    return (0);
  current = *lst;
  biggest = current->content;
  while (current)
  {
    if (current->content > biggest)
      biggest = current->content;
    current = current->next;
  }
  return (biggest);
}
