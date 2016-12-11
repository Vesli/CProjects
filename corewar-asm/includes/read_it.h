/*
** read_it.h for read_it.h in /home/passep_j//Corewar/corewar-asm/sources
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Wed Mar 20 17:33:47 2013 jean-charles passepont
** Last update Sat Mar 23 16:56:33 2013 jean-charles passepont
*/

#ifndef	READ_IT_H_
# define READ_IT_H_

int		nb_elem(char **tab);
void		init_elem(t_elem *elem, char *str);
void		my_show_list(t_dlist *dlist);
void		create_elem(t_var *var, t_dlist **dlist, char *str);
void		read_it(t_var *var, t_dlist *dlist);

#endif /* READ_IT_H_ */
