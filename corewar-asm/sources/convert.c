/*
** convert.c for asm in /home/arsac_r/corewar-asm
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Mon Mar 18 04:53:10 2013 Romain Arsac
** Last update Sat Mar 30 17:41:42 2013 vivien penel
*/

#include <stdlib.h>
#include "my.h"
#include "var.h"
#include "dlist.h"
#include "proto.h"
#include "convert.h"
#include "writting.h"
#include "convert_arg.h"
#include "convert_op1.h"
#include "convert_op2.h"
#include "convert_op3.h"

void		set_name(char name[17][6])
{
  my_strcpy(name[0], "live");
  my_strcpy(name[1], "ld");
  my_strcpy(name[2], "st");
  my_strcpy(name[3], "add");
  my_strcpy(name[4], "sub");
  my_strcpy(name[5], "and");
  my_strcpy(name[6], "or");
  my_strcpy(name[7], "xor");
  my_strcpy(name[8], "zjmp");
  my_strcpy(name[9], "ldi");
  my_strcpy(name[10], "sti");
  my_strcpy(name[11], "fork");
  my_strcpy(name[12], "lld");
  my_strcpy(name[13], "lldi");
  my_strcpy(name[14], "lfork");
  my_strcpy(name[15], "aff");
  name[16][0] = '\0';
}

void		set_function(void (*fct[17])(t_elem *))
{
  fct[0] = &convert_live;
  fct[1] = &convert_ld;
  fct[2] = &convert_st;
  fct[3] = &convert_add;
  fct[4] = &convert_sub;
  fct[5] = &convert_and;
  fct[6] = &convert_or;
  fct[7] = &convert_xor;
  fct[8] = &convert_zjmp;
  fct[9] = &convert_ldi;
  fct[10] = &convert_sti;
  fct[11] = &convert_fork;
  fct[12] = &convert_lld;
  fct[13] = &convert_lldi;
  fct[14] = &convert_lfork;
  fct[15] = &convert_aff;
  fct[16] = NULL;
}

void		convert_dlist(t_var *var, t_dlist *dlist)
{
  int		i;
  int		size_tot;
  char		name[17][6];
  void		(*fct[17])(t_elem *elem);
  t_elem	*elem;

  size_tot = 0;
  set_name(name);
  set_function(fct);
  elem = dlist->p_first;
  while (elem)
    {
      i = 0;
      while (name[i][0] != '\0')
	{
	  if (my_strcmp(name[i], elem->op_tab) == 0)
	    {
	      fct[i](elem);
	      convert_arg(elem);
	    }
	  i++;
	}
      size_tot += elem->size_params + elem->size_arg_1 + elem->size_arg_2 + elem->size_arg_3 + 1; 
      
/*
**      printf("%s: params: %d elem1 %d elem2 %d elem3 %d\n", elem->op_tab, elem->size_params, elem->size_arg_1, elem->size_arg_2, elem->size_arg_3);
*/

      elem = elem->p_next;
    }
/*
**  printf("Total: %d -- %x\n", size_tot, size_tot);
*/

  write_header(var, dlist);
}
