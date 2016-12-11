/*
** mlx_putpxl_to_img.c for mlx_putpxl_to_img in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 15:44:09 2013 jean-charles passepont
** Last update Sun Feb 24 17:22:05 2013 jean-charles passepont
*/

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
