/*
** struct.h for struct in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Wed Feb  6 11:48:31 2013 jean-charles passepont
** Last update Sun Feb 24 15:43:44 2013 jean-charles passepont
*/

#ifndef		_STRUCT_H_
# define	_STRUCT_H_

typedef	struct	s_draw
{
  void		*mlx_ptr;
  void		*win_ptr;
  void		*img;
  char		*data;
  int		winx;
  int		winy;
  double	Vxs;
  double	Vys;
  double	Vzs;
  double	Vxc;
  double	Vyc;
  int		x;
  int		y;
  int		i;
  int		r;
  int		g;
  int		b;
  int		form;
  int		sizeline;
  double	xs;
  double	ys;
  double	zs;
  double	xc;
  double	yc;
  double	Rs;
  double	Rc;
  double	kp;
  double	kc;
  double	ks;
  double	ks1;
  double	ks2;
  double	p;
  double	x1;
  double	y1;
  double	z1;
  double	xo;
  double	yo;
  double	zo;
}	t_draw;

int	gere_expose(t_draw *draw);

#endif		/*_STRUCT_H_*/
