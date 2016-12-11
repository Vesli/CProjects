/*
** dlist.h for asm in /home/arsac_r/corewar-asm/sources
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Mon Mar 18 00:11:46 2013 Romain Arsac
** Last update Thu Mar 28 00:53:46 2013 vivien penel
*/

#ifndef DLIST_H_
# define DLIST_H_

typedef	struct		s_elem
{
  char			*label;
  char			*op_tab;
  char			*arg_1;
  char			*arg_2;
  char			*arg_3;
  char			*hexa_arg_1;
  char			*hexa_arg_2;
  char			*hexa_arg_3;
  int			rnb;
  int			dirnb;
  int			value;
  int			mnemo;
  int			param_cod;
  int			size_params;
  int			size_arg_1;
  int			size_arg_2;
  int			size_arg_3;
  int			size;
  struct s_elem		*p_prev;
  struct s_elem		*p_next;
}			t_elem;

typedef struct		s_dlist
{
  t_elem		*p_first;
  t_elem		*p_last;
}			t_dlist;

#endif /* DLIST_H_ */
