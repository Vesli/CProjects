/*
** calc_init.c for calc_init in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 15:41:59 2013 jean-charles passepont
** Last update Sat Mar 16 19:00:52 2013 jean-charles passepont
*/

#include "list.h"
#include "struct.h"
#include "my.h"

void	calc_init(t_draw *draw, t_list *list, t_elem *elem)
{
  draw->xo = -300;
  draw->yo = 0;
  draw->zo = 50;
  draw->x1 = 100;
  draw->y1 = (draw->winx / 2) - draw->x;
  draw->z1 = (draw->winy / 2) - draw->y;
  draw->Vx = draw->x1 - draw->xo - elem->x;
  draw->Vy = draw->y1 - draw->yo - elem->y;
  draw->Vz = draw->z1 - draw->zo - elem->z;
  elem->k = 0;
  (*draw->ptr[elem->i])(draw, list, elem);
}
