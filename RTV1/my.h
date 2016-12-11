/*
** my.h for my in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 16:12:15 2013 jean-charles passepont
** Last update Sun Feb 24 21:41:01 2013 jean-charles passepont
*/

#ifndef		_MY_H_
# define	_MY_H_

#include 	"struct.h"

int			gere_key(int, t_draw *);
int			calc_init(t_draw *);
int			make_full(t_draw *);
int			inter_sphere(t_draw *);
int			inter_plan(t_draw *);
int     	mlx_put_pxl_to_img(int, int, int, t_draw *);
int			draw_plan(t_draw *);
int			draw_sphere(t_draw *);
int			put_n_put(t_draw *);
int			gere_expose(t_draw *);
int			add_struct(t_draw *);
int			init_draw(t_draw *);
int			init(t_draw *);

#endif		/*_MY_H_*/
