/*
** make_full.c for make_full in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Feb  8 10:04:55 2013 jean-charles passepont
** Last update Tue Feb 19 16:09:22 2013 jean-charles passepont
*/

#include <math.h>
#include "struct.h"
#include <stdio.h>

int	mlx_put_pxl_to_img(int r, int g, int b, t_draw *draw)
{
  int	i;

  i = (draw->sizeline * draw->y) + (draw->x * 4);
  draw->data[i] = b;
  draw->data[i + 1] = g;
  draw->data[i + 2] = r;
  draw->data[i + 3] = 0;
}

int	make_full_img(t_draw *draw)
{
  draw->y = 0;
  while (draw->y < draw->winy)
    {
      draw->x = 0;
      while (draw->x < draw->winx)
	{
	  if (calc_sphere(draw) == 1)
	    mlx_put_pxl_to_img(255, 0, 0, draw);
	  //	  calc_plan(draw);
	  draw->x++;
	}
      draw->y++;
    }
}

int	calc_init(t_draw *draw)
{
  draw->xo = -300;
  draw->yo = 0;
  draw->zo = 0;
  draw->x1 = 100;
  draw->y1 = ((draw->winx / 2) - draw->x);
  draw->z1 = ((draw->winy / 2) - draw->y);
  draw->Vx = draw->x1 - draw->xo;
  draw->Vy = draw->y1 - draw->yo;
  draw->Vz = draw->z1 - draw->zo;
}

int	calc_sphere(t_draw *draw)
{
  double	a;
  double	b;
  double	c;
  double	delta;
  double	ks1;
  double	ks2;

  a = (draw->Vx * draw->Vx) + (draw->Vy * draw->Vy) + (draw->Vz * draw->Vz);
  b = 2 * ((draw->xo * draw->Vx) + (draw->yo * draw->Vy) \
	   + (draw->zo * draw->Vz));
  c = (draw->xo * draw->xo) + (draw->yo * draw->yo) + (draw->zo * draw->zo) - 1000;
  delta = (b * b) - (4 * a * c);
  //  printf("%d\n", delta);
  if (delta < 0)
    {
      draw->ks = -1;
      return (0);
    }
  else
    {
      ks1 = (-b - sqrt(delta)) / (2 * a);
      ks2 = (-b + sqrt(delta)) / (2 * a);
      if (ks2 <= ks1)
	  draw->ks = ks2;
      else
	  draw->ks = ks1;
        return (1);
    }
}

int	calc_plan(t_draw *draw)
{
  double	a;

  if (draw->Vz == 0)
    {
      draw->kp == -1;
      return (0);
    }
  a = -draw->zo / draw->Vz;
  if (a > 0)
    {
      draw->kp = a;
      return (1);
    }
  else
    draw->kp = -1;
  return (0);
}

/*int	draw_thing(t_draw *draw)
{
  if (draw->ks > draw->kp)
    mlx_put_pxl_to_img(0, 0, 255, draw);
  else
    mlx_put_pxl_to_img(250, 0, 0, draw);

    }*/
