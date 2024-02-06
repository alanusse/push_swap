/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglanuss <aglanuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:48:49 by aglanuss          #+#    #+#             */
/*   Updated: 2024/02/06 14:02:27 by aglanuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *numbers_list(t_list **lst)
{
  t_list  *current;
  int     lst_size;
  int     i;
  int     *ret;

  lst_size = lstsize(lst);
  ret = malloc(sizeof(int) * lst_size);
  if (!ret)
    exit(EXIT_FAILURE);
  current = *lst;
  i = 0;
  while (current)
  {
    ret[i] = current->content;
    i++;
    current = current->next;
  }
  return (ret);
}

static void  sort_array(t_list **lst, int **arr)
{
  int lst_size;
  int i;
  int j;
  int tmp;

  lst_size = lstsize(lst);
  i = 0;
  while (i < lst_size)
  {
    j = 0;
    while (j < lst_size)
    {
      if ((*arr)[j] > (*arr)[j + 1])
      {
        tmp = (*arr)[j + 1];
        (*arr)[j + 1] = (*arr)[j];
        (*arr)[j] = tmp;
      }
      j++;
    }
    i++;
  }
}

static int  find_index(int *nums, int size, int num)
{
  while (nums >= 0 && nums[size] != num)
    size--;
  return (size - 1);
}

void index_stack(t_list **lst)
{
  int     *nums;
  int     lst_size;
  t_list  *current;

  nums = numbers_list(lst);
  sort_array(lst, &nums);
  lst_size = lstsize(lst);
  current = *lst;
  while (current)
  {
    current->idx = find_index(nums, lst_size, current->content);
    current = current->next;
  }
  free(nums);
}
