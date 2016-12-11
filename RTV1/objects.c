/*
** objects.c for objects in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 15:40:02 2013 jean-charles passepont
** Last update Sun Feb 24 21:55:18 2013 jean-charles passepont
*/

#include  <math.h>
#include  "struct.h"
#include  "my.h"

int	      make_full(t_draw *draw)
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

int	      inter_sphere(t_draw *draw)
{
  double	a;
  double	b;
  double	c;
  double	k1;
  double	k2;
  double	delta;

  a = (draw->Vx * draw->Vx) + (draw->Vy * draw->Vy) + (draw->Vz * draw->Vz);
  b = 2 * ((draw->xo * draw->Vx) \
	   + (draw->yo * draw->Vy) + (draw->zo * draw->Vz));
  c = (draw->xo * draw->xo) + (draw->yo * draw->yo) \
	+ (draw->zo * draw->zo) - (100 * 100);
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

int	      inter_plan(t_draw *draw)
{
  double	a;

  if (draw->Vz == 0)
  {
    draw->kp == -1;
    return (0);
  }
  a = -(draw->zo / draw->Vz);
  if (a >= 0.000001)
  {
    draw->kp = a;
    return (1);
  }
  else
    draw->kp = -1;
  return (0);
}
