/*
** convert.h for asm in /home/penel_v//corewar-asm/includes
** 
** Made by vivien penel
** Login   <penel_v@epitech.net>
** 
** Started on  Wed Mar 27 18:04:01 2013 vivien penel
** Last update Wed Mar 27 18:26:50 2013 vivien penel
*/

#ifndef	CONVERT__H_
# define CONVERT_H_

void	set_name(char name[17][6]);
void	set_function(void (*fct[17])(t_elem *));
void	convert_dlist(t_var *var, t_dlist *dlist);

#endif /*CONVERT_H_*/

