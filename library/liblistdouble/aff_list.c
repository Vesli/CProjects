/*
** aff_list.c for aff_list in /home/passep_j//bordel/library/liblistdouble
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Jan 18 01:16:40 2013 jean-charles passepont
** Last update Fri Jan 18 01:24:28 2013 jean-charles passepont
*/

#include <stdlib.h>
#include "list.h"

void		aff_list(t_list *list)
{
  t_elem	*tmp;

  tmp = list->begin;
  while (tmp != NULL)
    {
      my_putstr(tmp->data);
      my_putchar('\n');
      tmp = tmp->next;
    }
}
