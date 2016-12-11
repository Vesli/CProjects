/*
** mlx_putpxl_to_img.c for mlx_putpxl_to_img in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 15:44:09 2013 jean-charles passepont
** Last update Wed Mar 13 17:29:12 2013 jean-charles passepont
*/

#include "list.h"
#include "struct.h"

void		mlx_put_pxl_to_img(t_list *list, t_draw *draw, t_elem *tmp)
{
  int		i;

  (void)list;
  i = (draw->sizeline * draw->y) + (draw->x * 4);
  draw->data[i] = tmp->b;
  draw->data[i + 1] = tmp->g;
  draw->data[i + 2] = tmp->r;
  draw->data[i + 3] = 0;
}
