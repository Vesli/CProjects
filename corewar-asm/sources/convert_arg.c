/*
** convert_hexa.c for asm in /home/penel_v//save_corewar/sources
** 
** Made by vivien penel
** Login   <penel_v@epitech.net>
** 
** Started on  Wed Mar 27 04:55:13 2013 vivien penel
** Last update Sat Mar 30 17:40:09 2013 vivien penel
*/

#include <stdlib.h>
#include "dlist.h"
#include "convert_arg.h"
#include "convert_hexa.h"

void	check_arg_1(t_elem *elem)
{
  char	*str;

  str = elem->arg_1;
  if (elem->size_arg_1 == 1)
    elem->hexa_arg_1 = reg_test(str);
  else if (elem->size_arg_1 == 2)
    elem->hexa_arg_1 = "IND";
  else if (elem->size_arg_1 == 4)
    elem->hexa_arg_1 = dir_test(str);
  else
    elem->hexa_arg_1 = NULL;
}

void	check_arg_2(t_elem *elem)
{
  char	*str;

  str = elem->arg_2;
  if (elem->size_arg_2 == 1)
    elem->hexa_arg_2 = reg_test(str);
  else if (elem->size_arg_2 == 2)
    elem->hexa_arg_2 = "IND";
  else if (elem->size_arg_2 == 4)
    elem->hexa_arg_2 = dir_test(str);
  else
    elem->hexa_arg_2 = NULL;
}

void	check_arg_3(t_elem *elem)
{
  char	*str;

  str = elem->arg_3;
  if (elem->size_arg_3 == 1)
    elem->hexa_arg_3 = reg_test(str);
  else if (elem->size_arg_3 == 2)
    elem->hexa_arg_3 = "IND";
  else if (elem->size_arg_3 == 4)
    elem->hexa_arg_3 = dir_test(str);
  else
    elem->hexa_arg_3 = NULL;
}

void	convert_arg(t_elem *elem)
{
  if (elem->size_arg_1 != 0)
    check_arg_1(elem);
  else
    elem->hexa_arg_1 = NULL;
  if (elem->size_arg_2 != 0)
    check_arg_2(elem);
  else
    elem->hexa_arg_2 = NULL;
  if (elem->size_arg_3 != 0)
    check_arg_3(elem);
  else
    elem->hexa_arg_3 = NULL;
}
