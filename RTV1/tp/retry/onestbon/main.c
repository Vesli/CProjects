/*
** main.c for main in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 15:33:34 2013 jean-charles passepont
** Last update Fri Mar 15 16:43:09 2013 jean-charles passepont
*/
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "list.h"
#include "my.h"

void		free_elem(t_list *list)
{
  t_elem	*tmp;
  t_elem	*save;

  tmp = list->first;
  while (tmp != NULL)
    {
      save = tmp;
      tmp = tmp->next;
      free(save);
    }
}

int		main(int ac, char **av)
{
  t_draw	draw;
  t_list	list;

  (void)ac;
  (void)av;
  list.first = NULL;
  list.last = NULL;
  open_scene(&draw, &list);
  free_elem(&list);
  return (0);
}
