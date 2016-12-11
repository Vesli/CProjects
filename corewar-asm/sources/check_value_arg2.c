/*
** check_value_arg2.c for check_value_arg2 in /home/passep_j//Corewar/corewar-asm/sources
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sat Mar 23 16:32:55 2013 jean-charles passepont
** Last update Sat Mar 23 16:58:06 2013 jean-charles passepont
*/

#include "dlist.h"
#include "check_value_arg2.h"
#include "my.h"

void		check_it_marg_2(t_elem *tmp)
{
  if (tmp->arg_2[i] == '%')
    {
      i++;
      while (tmp->arg_2[i] == '-' && tmp->arg_2[i] >= '0' && tmp->arg_2[i] <= '9')
	{
	  tmp->value += my_getnbr(tmp->arg_2[i]);
	  i++;
	}
    }
}

void		check_value_rarg2(t_elem *tmp, t_list *list)
{
  int		i;

  tmp = list->first;
  while (tmp)
    {
      tmp->value = 0;
      i = 0;
      while (tmp->arg_2[i] != '\0')
	{
	  if (tmp->arg_2[i] == 'r')
	    {
	      i++;
	      while (tmp->arg_2[i] >= '0' && tmp->arg_2[i] <= '9')
		{
		  tmp->value += my_getnbr(tmp->arg_2[i]);
		  i++;
		}
	    }
	  else
	    check_it_marg_2(tmp);
	}
      tmp = tmp->next;
    }
  check_value_rarg3(tmp, list);
}
