/*
** put_in_list.c for put_in_list in /home/passep_j//bordel/library/liblistdouble
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Jan 18 01:12:46 2013 jean-charles passepont
** Last update Fri Jan 18 01:23:36 2013 jean-charles passepont
*/

#include <stdlib.h>
#include "list.h"

int       my_put_in_list(t_list *list, char *data)
{
  t_elem	*new_elem;

  if ((new_elem = malloc(sizeof(t_elem))) != NULL)
    {
      new_elem->data = data;
      new_elem->next = NULL;
      new_elem->prev = list->last;
      if (list->last != NULL)
        list->last->next = new_elem;
      else
        list->begin = new_elem;
      list->last = new_elem;
    }
}
