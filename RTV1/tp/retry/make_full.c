/*
** make_full.c for make_full in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Feb 19 16:12:59 2013 jean-charles passepont
** Last update Sun Feb 24 16:11:59 2013 jean-charles passepont
*/
#include <math.h>
#include <stdio.h>
#include "struct.h"

int     mlx_put_pxl_to_img(int r, int g, int b, t_draw *draw)
{
  int   i;

  i = (draw->sizeline * draw->y) + (draw->x * 4);
  draw->data[i] = b;
  draw->data[i + 1] = g;
  draw->data[i + 2] = r;
  draw->data[i + 3] = 0;
}

/* int     mlx_put_pxl_to_img(t_draw *draw) */
/* { */
/*   int   i; */

/*   i = (draw->sizeline * draw->y) + (draw->x * 4); */
/*   draw->data[i] = draw->b; */
/*   draw->data[i + 1] = draw->g; */
/*   draw->data[i + 2] = draw->r; */
/*   draw->data[i + 3] = 0; */
/*   } */

int	make_full(t_draw *draw)
{
  draw->y = 0;
  while (draw->y < draw->winy)
    {
      draw->x = 0;
      while (draw->x < draw->winx)
	{
	  calc_init(draw);
	  draw->x++;
	}
      draw->y++;
    }
}

int	inter_sphere(t_draw *draw)
{
  double	a;
  double	b;
  double	c;
  double	k1;
  double	k2;
  double	delta;

  a = (draw->Vxs * draw->Vxs) + (draw->Vys * draw->Vys) + (draw->Vzs * draw->Vzs);
  b = 2 * ((draw->xo * draw->Vxs) + (draw->yo * draw->Vys) + (draw->zo * draw->Vzs));
  c = (draw->xo * draw->xo) + (draw->yo * draw->yo) + (draw->zo * draw->zo) - (draw->Rs * draw->Rs);
  delta = (b * b) - (4 * a * c);
  if (delta < 0)
    {
      draw->ks = -1;
      return (0);
    }
  else
    {
      k1 = (-b + sqrt(delta)) / (2 * a);
      k2 = (-b - sqrt(delta)) / (2 * a);
      if ((k1 >= k2) && (k2 >= 0))
	draw->ks = k2;
      else if ((k1 <= k2) && (k1 >= 0))
	draw->ks = k1;
      return (1);
    }
}

int	inter_cylindre(t_draw *draw)
{
  double	a;
  double	b;
  double	c;
  double	k1;
  double	k2;
  double	delta;

  a = (draw->Vxc * draw->Vxc) + (draw->Vyc * draw->Vyc);
  b = 2 * (draw->xo * draw->Vxc) + (draw->yo * draw->Vyc);
  c = (draw->xo * draw->xo) + (draw->yo * draw->yo) - (draw->Rc * draw->Rc);
  delta = (b * b) - (4 * a * c);
  k1 = (-b + sqrt(delta)) / (2 * a);
  k2 = (-b - sqrt(delta)) / (2 * a);
  if (delta < 0)
    {
      draw->kc = -1;
      return (0);
    }
  else
    {
      if ((k1 >= k2) && (k2 >= 0))
	draw->kc = k2;
      else if ((k1 <= k2) && (k1 >= 0))
	draw->kc = k1;
      return (1);
    }
}

/* int	inter_cube(t_draw *draw) */
/* { */
/*   double	a; */
/*   double	b; */
/*   double	c; */
/*   double	k1; */
/*   double	k2; */
/*   double	delta; */

/*   a = (draw->Vx * draw->Vx * draw->Vx) + (draw->Vy * draw->Vy * draw->Vy) + (draw->Vz * draw->Vz * draw->Vz); */
/*   if (a < 0) */
/*     { */
/*       draw->ks = -1; */
/*       return (0); */
/*     } */
/*   else */
/*     { */
/*       return (1); */
/*     } */
/* } */

int	inter_plan(t_draw *draw)
{
  double	a;

  if (draw->Vzs == 0)
    {
      draw->kp == -1;
      return (0);
    }
  a = -(draw->zo / draw->Vzs);
  if (a >= 0.000001)
    {
      draw->kp = a;
      return (1);
    }
  else
    draw->kp = -1;
  return (0);
}

int	calc_init(t_draw *draw)
{
  int	r;
  int	g;
  int	b;

  draw->xo = -300;
  draw->yo = 0;
  draw->zo = 50;
  draw->x1 = 100;
  draw->y1 = (draw->winx / 2) - draw->x;
  draw->z1 = (draw->winy / 2) - draw->y;
  draw->Vxs = draw->x1 - draw->xo - draw->xs;
  draw->Vys = draw->y1 - draw->yo - draw->ys;
  draw->Vzs = draw->z1 - draw->zo - draw->zs;
  draw->Vxc = draw->x1 - draw->xo - draw->xc;
  draw->Vyc = draw->y1 - draw->yo - draw->yc;
  if (draw->form == 0)
    {
      inter_cylindre(draw);
      inter_sphere(draw);
    }
  if (inter_plan(draw) == 1)
    {
      if ((draw->ks >= draw->kp) && (draw->kp <= draw->kc))
	mlx_put_pxl_to_img(0, 0, 250, draw);
      mlx_put_pxl_to_img(0, 0, 250, draw);
    }
  if ((inter_sphere(draw) == 1))
    {
      if ((draw->ks <= draw->kp))
	mlx_put_pxl_to_img(250, 250 , b, draw);
	else if ((inter_plan(draw) == 0) && (inter_cylindre == 0))
	mlx_put_pxl_to_img(250, 250, b, draw);
    }
  if ((inter_cylindre(draw) == 1))
    {
      if ((draw->kc <= draw->kp))
  	mlx_put_pxl_to_img(255, 0, 0, draw);
      else if (inter_plan(draw) == 0 && inter_sphere(draw) == 0)
      	mlx_put_pxl_to_img(255, 0, 0, draw);
    }
}
