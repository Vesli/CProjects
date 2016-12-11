/*
** my.h for my in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Feb 24 16:12:15 2013 jean-charles passepont
** Last update Sat Mar 16 18:57:26 2013 jean-charles passepont
*/

#ifndef		MY_H_
# define	MY_H_

#include "list.h"
#include "struct.h"

int	my_getnbr(char *);
int	my_strncmp(char *s1, char *s2, int n);
int	gere_key(int keycode, t_draw *draw);
void	calc_init(t_draw *draw, t_list *list, t_elem *elem);
void	make_full(t_draw *draw, t_list *list, t_elem *elem);
int	inter_sphere(t_draw *draw, t_list *list, t_elem *elem);
int	calc_object(t_list *list, t_draw *draw, t_elem *elem);
int	inter_plan(t_draw *draw, t_list *list, t_elem *elem);
int     mlx_put_pxl_to_img(t_list *list, t_draw *draw, t_elem *elem);
void	draw_plan(t_draw *draw, t_list *list, t_elem *tmp);
void	draw_sphere(t_draw *draw, t_list *list, t_elem *tmp);
void	put_n_put(t_draw *draw);
int	gere_expose(t_draw *draw);
void	add_struct(t_draw *draw);
void	init_draw(t_draw *draw, t_list *list, t_elem *elem);
int	init(t_draw *draw, t_list *list, t_elem *elem);
int	r_func(char *buff, int lu);
int	g_func(char *buff, int lu);
int	b_func(char *buff, int lu);
int	put_rayon(char *buff, int lu);
int	coor_x(char *buff, int lu);
int	coor_y(char *buff, int lu);
int	coor_z(char *buff, int lu);
void	open_scene(t_draw *draw, t_list *list);
int	name_object(t_list *list, t_elem *elem, char *buff);
void	add_coord(t_list *list, t_elem *elem, char *buff, int i);
void	draw_cyl(t_draw *draw, t_list *list, t_elem *tmp);
void	draw_cone(t_draw *draw, t_list *list, t_elem *tmp);
int     inter_cylindre(t_draw *draw, t_list *list, t_elem *elem);
int     inter_cone(t_draw *draw, t_list *list, t_elem *elem);
void	find_little(t_draw *draw, t_list *list, t_elem *elem);

#endif		/*MY_H_*/
