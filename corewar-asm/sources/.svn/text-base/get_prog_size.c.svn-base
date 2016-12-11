/*
** get_prog_size.c for asm in /home/arsac_r/corewar-asm
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Mon Mar 25 17:55:22 2013 Romain Arsac
** Last update Mon Mar 25 18:03:54 2013 Romain Arsac
*/

#include "dlist.h"

int		get_prog_size(t_dlist *dlist)
{
  int		size;
  t_elem	*elem;

  size = 0;
  elem = dlist->p_first;
  while (elem)
  {
    size += elem->size_params + 1;
    size += elem->size_arg_1 + elem->size_arg_2 + elem->size_arg_3;
    elem = elem->p_next;
  }
  return (size);
}
