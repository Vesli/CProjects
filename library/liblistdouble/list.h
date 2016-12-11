/*
** list.h for list in /home/passep_j//bordel/library/liblistdouble
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Jan 18 01:20:29 2013 jean-charles passepont
** Last update Fri Jan 18 01:23:18 2013 jean-charles passepont
*/

#ifndef				_LIST_H_
# define			_LIST_H_

typedef	struct		s_elem
{
  void				*data;
  struct	s_elem	*next;
  struct	s_elem	*prev;
}					t_elem;

typedef	struct		s_list
{
  t_elem			*begin;
  t_elem			*last;
}					t_list;

int			my_pil(t_list *list, char *data);
void		aff_list(t_list *list);
void		free_elem(t_list *list, t_elem *elem);

#endif				/*_LIST_H_*/
