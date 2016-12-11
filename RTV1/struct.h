/*
** struct.h for struct in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 15:35:58 2013 jean-charles passepont
** Last update Sun Feb 24 17:25:45 2013 jean-charles passepont
*/

#ifndef         _STRUCT_H_
# define        _STRUCT_H_

typedef	struct	s_draw
{
  void		      *mlx_ptr;
  void		      *win_ptr;
  void		      *img;
  char		      *data;
  int           winx;
  int           winy;
  int           r;
  int           g;
  int           b;
  int           x;
  int           y;
  int           sizeline;
  double        x1;
  double        y1;
  double        z1;
  double        Vx;
  double        Vy;
  double        Vz;
  double        xo;
  double        yo;
  double        zo;
  double        xs;
  double        ys;
  double        kp;
  double        ks;
}               t_draw;

int	    gere_expose(t_draw *);

#endif		      /*_STRUCT_H_*/
