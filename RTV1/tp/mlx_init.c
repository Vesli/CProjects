/*
** mlx_init.c for mlx_init in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Feb  8 09:33:19 2013 jean-charles passepont
** Last update Tue Feb 19 14:49:49 2013 jean-charles passepont
*/

#include "struct.h"

int	put_n_put(t_draw *draw)
{
  mlx_put_image_to_window(draw->mlx_ptr, draw->win_ptr, \
			  draw->img, draw->winx, draw->winy);
  mlx_expose_hook(draw->win_ptr, gere_expose, draw);
}
