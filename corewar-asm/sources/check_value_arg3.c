/*
** check_value_arg3.c for check_value_arg3 in /home/passep_j//Corewar/corewar-asm/sources
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sat Mar 23 16:46:45 2013 jean-charles passepont
** Last update Sat Mar 23 16:58:29 2013 jean-charles passepont
*/

#include "dlist.h"
#include "check_value_arg3.h"
#include "my.h"

void		check_it_marg_3(t_elem *tmp)
{
  if (tmp->arg_3[i] == '%')
    {
      i++;
      while (tmp->arg_3[i] == '-' && tmp->arg_3[i] >= '0' && tmp->arg_3[i] <= '9')
	{
	  tmp->value += my_getnbr(tmp->arg_3[i]);
	  i++;
	}
    }
}

void		check_value_rarg3(t_elem *tmp, t_list *list)
{
  int		i;

  tmp = list->first;
  while (tmp)
    {
      tmp->value = 0;
      i = 0;
      while (tmp->arg_3[i] != '\0')
	{
	  if (tmp->arg_3[i] == 'r')
	    {
	      i++;
	      while (tmp->arg_3[i] >= '0' && tmp->arg_3[i] <= '9')
		{
		  tmp->value += my_getnbr(tmp->arg_3[i]);
		  i++;
		}
	    }
	  else
	    check_it_marg_3(tmp);
	}
      tmp = tmp->next;
    }
}
