/*
** objects.c for objects in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 15:40:02 2013 jean-charles passepont
** Last update Sat Mar 16 18:52:15 2013 jean-charles passepont
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "struct.h"
#include "my.h"
#include "list.h"

void		make_full(t_draw *draw, t_list *list, t_elem *elem)
{
  t_elem	*tmp;

  (void)elem;
  draw->y = 0;
  tmp = list->first;
  while (draw->y < draw->winy)
    {
      draw->x = 0;
      while (draw->x < draw->winx)
	{
	  tmp = list->first;
	  while (tmp)
	    {
	      calc_init(draw, list, tmp);
	      tmp = tmp->next;
	    }
	  find_little(draw, list, elem);
	  draw->x++;
	}
      draw->y++;
    }
}

int             inter_cone(t_draw *draw, t_list *list, t_elem *elem)
{
  double        delta;

  (void)list;
  draw->a = ((draw->Vx * draw->Vx) + (draw->Vy * draw->Vy))	\
    - (draw->Vz * draw->Vz * tan(10) * tan(10));
  draw->b = ((2 * draw->Vx * draw->xo) + (2 * draw->Vy * draw->yo))	\
    - (2 * draw->Vz * draw->zo * tan(10) * tan(10));
  draw->c = ((draw->xo * draw->xo) + (draw->yo * draw->yo)) - (draw->zo * draw->zo * tan(10) * tan(10));
  delta = (draw->b * draw->b) - (4 * draw->a * draw->c);
  if (delta <= 0.00001)
    {
      elem->k = -1;
      return (0);
    }
  if (delta >= 0.000001)
    {
      if ((-draw->b + sqrt(delta)) / (2 * draw->a) >= (-draw->b - sqrt(delta)) / (2 * draw->a))
	elem->k = (-draw->b - sqrt(delta)) / (2 * draw->a);
      else
	elem->k = (-draw->b + sqrt(delta)) / (2 * draw->a);
    }
  return (1);
}

int     inter_cylindre(t_draw *draw, t_list *list, t_elem *elem)
{
  double        k1;
  double        k2;
  double        delta;

  (void)list;
  draw->a = (draw->Vx * draw->Vx) + (draw->Vy * draw->Vy);
  draw->b = 2 * (draw->xo * draw->Vx) + (draw->yo * draw->Vy);
  draw->c = (draw->xo * draw->xo) + (draw->yo * draw->yo) - (elem->R * elem->R);
  delta = (draw->b * draw->b) - (4 * draw->a * draw->c);
  if (delta <= 0.000001)
    elem->k = -1;
  else
    {
      k1 = (-draw->b + sqrt(delta)) / (2 * draw->a);
      k2 = (-draw->b - sqrt(delta)) / (2 * draw->a);
      if (k1 >= k2)
	elem->k = k2;
      else
	elem->k = k1;
      return (1);
    }
  return (0);
}

int	inter_sphere(t_draw *draw, t_list *list, t_elem *elem)
{
  double	k1;
  double	k2;
  double	delta;

  (void)list;
  draw->a = (draw->Vx * draw->Vx) + (draw->Vy * draw->Vy) + (draw->Vz * draw->Vz);
  draw->b = 2 * ((draw->xo * draw->Vx) \
		 + (draw->yo * draw->Vy) + (draw->zo * draw->Vz));
  draw->c = (draw->xo * draw->xo) + (draw->yo * draw->yo) \
    + (draw->zo * draw->zo) - (elem->R * elem->R);
  delta = (draw->b * draw->b) - (4 * draw->a * draw->c);
  if (delta < 0)
    {
      elem->k = -1;
      return (0);
    }
  else
    {
      k1 = (-draw->b + sqrt(delta)) / (2 * draw->a);
      k2 = (-draw->b - sqrt(delta)) / (2 * draw->a);
      if (k1 >= k2)
	elem->k = k2;
      else
	elem->k = k1;
      return (1);
    }
  return (0);
}

int	inter_plan(t_draw *draw, t_list *list, t_elem *tmp)
{
  double	a;

  (void)list;
  if (draw->Vz == 0.000)
    {
      tmp->k = -1;
      return (0);
    }
  a = -(draw->zo / draw->Vz);
  if (a >= 0.000001)
    {
      tmp->k = a;
      return (1);
    }
  else
    tmp->k = -1;
  return (0);
}
