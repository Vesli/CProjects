/*
** struct.h for struct in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 15:35:58 2013 jean-charles passepont
** Last update Fri Mar 15 17:49:05 2013 jean-charles passepont
*/

#ifndef		_STRUCT_H_
# define	_STRUCT_H_

#include	"list.h"

typedef	struct	s_draw
{
  void		*mlx_ptr;
  void		*win_ptr;
  void		*img;
  char		*data;
  int		winx;
  int		winy;
  int		sizeline;
  int		x;
  int		y;
  double	a;
  double	b;
  double	c;
  double	x1;
  double	y1;
  double	z1;
  double	Vx;
  double	Vy;
  double	Vz;
  double	xo;
  double	yo;
  double	zo;
  int (*ptr[5])(struct s_draw*, t_list*, t_elem*);
}		t_draw;

#endif		/*_STRUCT_H_*/
