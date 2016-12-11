/*
** struct.h for struct.h in /home/passep_j//test_en_vrac/list
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Wed Jan  2 17:40:05 2013 jean-charles passepont
** Last update Wed Jan  2 17:41:51 2013 jean-charles passepont
*/

#ifndef				STRUCT_H_
# define			STRUCT_H_

typedef	struct		s_a
{
  void				*data;
  struct			s_a	*next;
}					t_list;

#endif				/*STRUCT_H_*/
