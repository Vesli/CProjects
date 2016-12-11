/*
** calc_init.c for calc_init in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 15:41:59 2013 jean-charles passepont
** Last update Thu Mar 14 10:34:52 2013 jean-charles passepont
*/

#include "struct.h"
#include "my.h"

int   calc_init(t_draw *draw)
{
  draw->xo = -300;
  draw->yo = 200;
  draw->zo = 50;
  draw->x1 = 150;
  draw->y1 = (draw->winx / 2) - draw->x;
  draw->z1 = (draw->winy / 2) - draw->y;
  draw->Vx = draw->x1 - draw->xo;
  draw->Vy = draw->y1 - draw->yo;
  draw->Vz = draw->z1;
  draw_plan(draw);
  draw_sphere(draw);
}
