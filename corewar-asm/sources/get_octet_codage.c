/*
** get_octet_codage.c for asm in /home/arsac_r/corewar-asm
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Mon Mar 25 18:08:56 2013 Romain Arsac
** Last update Sat Mar 30 15:46:31 2013 vivien penel
*/

#include "get_octet_codage.h"

void		get_octet_codage(unsigned char *convert, int type)
{
  *convert = (*convert) << 2;
  if (type == 11)
    (*convert) |= 3;
  else if (type == 01)
    (*convert) |= 1;
  else if (type == 10)
    (*convert) |= 2;
}

/*void		set_octet(t_elem *elem)
{
  get_octet_codage(elem->param_cod, elem->size_arg_1);
  get_octet_codage(elem->param_cod, elem->size_arg_2);
  get_octet_codage(elem->param_cod, elem->size_arg_3);
  get_octet_codage(elem->param_cod, 0);
  }*/
