/*
** draw_objects.c for draw_objects in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 16:54:22 2013 jean-charles passepont
** Last update Sun Mar 10 18:26:01 2013 jean-charles passepont
*/

#include "struct.h"

int	draw_plan(t_draw *draw)
{
  if (inter_plan(draw) == 1)
  {
    if (draw->ks >= draw->kp)
    	mlx_put_pxl_to_img(0, 0, 250, draw);
    mlx_put_pxl_to_img(0, 0, 250, draw);
  }
}

int	draw_sphere(t_draw *draw)
{
  if (inter_sphere(draw) == 1)
  {
    if (draw->ks <= draw->kp)
    	mlx_put_pxl_to_img(250, 250, 0, draw);
    else if (inter_plan(draw) == 0)
      mlx_put_pxl_to_img(250, 250, 0, draw);
  }
}
