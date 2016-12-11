/*
** convert_op1.c for asm in /home/arsac_r/corewar-asm
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Wed Mar 20 20:41:54 2013 Romain Arsac
** Last update Sun Mar 31 13:06:10 2013 Romain Arsac
*/

#include "my.h"
#include "var.h"
#include "dlist.h"
#include "proto.h"
#include "convert_op1.h"
#include "check_args_type.h"
#include "get_octet_codage.h"

void		convert_live(t_elem *elem)
{
  elem->mnemo = 0x01;
  elem->size_params = 0;
  elem->size_arg_1 = DIR;
  elem->size_arg_2 = 0;
  elem->size_arg_3 = 0;
  elem->param_cod = 0;
}

void		convert_ld(t_elem *elem)
{
  elem->mnemo = 0x02;
  elem->size_params = 1;
  if (check_dir(elem->arg_1) == 1)
    elem->size_arg_1 = DIR;
  else if (check_ind(elem->arg_1) == 1)
    elem->size_arg_1 = INDIR;
  elem->size_arg_2 = REG;
  elem->size_arg_3 = 0;
}

void		convert_st(t_elem *elem)
{
  elem->mnemo = 0x03;
  elem->size_params = 1;
  elem->size_arg_1 = REG;
  if (check_ind(elem->arg_2) == 1)
    elem->size_arg_2 = INDIR;
  else if (check_reg(elem->arg_2) == 1)
    elem->size_arg_2 = REG;
  elem->size_arg_3 = 0;
}

void		convert_add(t_elem *elem)
{
  elem->mnemo = 0x04;
  elem->size_params = 1;
  elem->size_arg_1 = REG;
  elem->size_arg_2 = REG;
  elem->size_arg_3 = REG;
}

void		convert_sub(t_elem *elem)
{
  elem->mnemo = 0x05;
  elem->size_params = 1;
  elem->size_arg_1 = REG;
  elem->size_arg_2 = REG;
  elem->size_arg_3 = REG;
}
