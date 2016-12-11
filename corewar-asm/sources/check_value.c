/*
** check_value.c for check_value in /home/passep_j//Corewar/corewar-asm/sources
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sat Mar 23 15:35:47 2013 jean-charles passepont
** Last update Sat Mar 23 16:57:52 2013 jean-charles passepont
*/

#include "dlist.h"
#include "check_value.h"
#include "my.h"

void		check_it_marg_1(t_elem *elem)
{
  if (tmp->arg_1[i] == '%')
    {
      i++;
      while (tmp->arg_1[i] >= '0' && tmp->arg_1[i] <= '9')
	{
	  tmp->value += my_getnbr(tmp->arg_1[i]);
	  i++;
	}
    }
}

void		check_it_rarg_1(t_elem *elem, t_list *list)
{
  t_elem	*tmp;
  int		i;

  tmp = list->first;
  while (tmp)
    {
      tmp->value = 0;
      i = 0;
      while (tmp->arg_1[i] != '\0')
	{
	  if (tmp->arg_1[i] == 'r')
	    {
	      i++;
	      while (tmp->arg_1[i] >= '0' && tmp->arg_1[i] <= '9')
		{
		  tmp->value += my_getnbr(tmp->arg_1[i]);
		  i++;
		}
	    }
	  else
	    check_it_marg_1(tmp);
	}
      tmp = tmp->next;
    }
  check_it_rarg_2(tmp, list);
}
