/*
** init_mlx.c for init_mlx in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 15:34:14 2013 jean-charles passepont
** Last update Sun Feb 24 17:26:33 2013 jean-charles passepont
*/

#include <mlx.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

int   put_n_put(t_draw *draw)
{
  mlx_put_image_to_window(draw->mlx_ptr, draw->win_ptr, \
			  draw->img, draw->winx, draw->winy);
  mlx_key_hook(draw->win_ptr, gere_key, draw);
  mlx_expose_hook(draw->win_ptr, gere_expose, draw);
}

int	  gere_expose(t_draw *draw)
{
  mlx_put_image_to_window(draw->mlx_ptr, draw->win_ptr, draw->img, 0, 0);
}

int	  add_struct(t_draw *draw)
{
  int	winx;
  int	winy;

  winx = 800;
  winy = 800;
  draw->winx = winx;
  draw->winy = winy;
}

int	  init_draw(t_draw *draw)
{
  mlx_put_image_to_window(draw->mlx_ptr, draw->win_ptr, draw->img, 0, 0);
  make_full(draw);
  put_n_put(draw);
}

int		init(t_draw *draw)
{
  int	endian;
  int	bpp;

  add_struct(draw);
  if ((draw->mlx_ptr = mlx_init()) != NULL)
  {
    if ((draw->img = mlx_new_image(draw->mlx_ptr, \
		     draw->winx, draw->winy)) != NULL)
  	{
      draw->data = mlx_get_data_addr(draw->img, &bpp, \
					 &draw->sizeline, &endian);
      if ((draw->win_ptr = mlx_new_window(draw->mlx_ptr,		\
  		      draw->winx, draw->winy, "My first window")) != NULL)
	    {
	      init_draw(draw);
	      mlx_loop(draw->mlx_ptr);
	    }
    }
  }
  else
    return (0);
}
