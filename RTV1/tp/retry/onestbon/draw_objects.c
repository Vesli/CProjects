/*
** draw_objects.c for draw_objects in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 16:54:22 2013 jean-charles passepont
** Last update Sat Mar 16 18:23:08 2013 jean-charles passepont
*/

#include <stdio.h>
#include "list.h"
#include "struct.h"
#include "my.h"

void		find_little(t_draw *draw, t_list *list, t_elem *elem)
{
  t_elem	*tmp;
  double	k;

  k = 1000;
  elem = list->first;
  tmp = list->first;
  while (elem)
    {
      if (k >= elem->k && elem->k >= 0.000)
	{
	  k = elem->k;
	  tmp = elem;
	}
      elem = elem->next;
    }
  if (tmp->k >= 0.0000)
    {
      mlx_put_pxl_to_img(list, draw, tmp);
    }
}
