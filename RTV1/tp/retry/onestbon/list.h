/*
** list.h for list in /home/passep_j//Projet_Semestre_1/My_select
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Jan 20 13:05:16 2013 jean-charles passepont
** Last update Sat Mar 16 17:17:21 2013 jean-charles passepont
*/

#ifndef			LIST_H_
# define		LIST_H_

typedef struct		s_elem
{
  char			*name;
  int			i;
  int			x;
  int			y;
  int			z;
  int			r;
  int			g;
  int			b;
  double		k;
  double		R;
  struct	s_elem	*prev;
  struct	s_elem	*next;
}			t_elem;

typedef	struct		s_list
{
  t_elem		*first;
  t_elem		*last;
}			t_list;

#endif			/*LIST_H_*/
