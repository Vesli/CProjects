/*
** free_list.c for free_list in /home/passep_j//bordel/library/liblistdouble
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Jan 18 01:18:34 2013 jean-charles passepont
** Last update Fri Jan 18 01:24:06 2013 jean-charles passepont
*/

#include <stdlib.h>
#include "list.h"

void		free_elem(t_list *list, t_elem *elem)
{
  t_elem	*tmp;
  t_elem	*save;

  tmp = list->begin;
  while (tmp != NULL)
    {
      save = tmp;
      tmp = tmp->next;
      free(save);
    }
}
