/*
** convert_op2.c for asm in /home/arsac_r/corewar-asm
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Wed Mar 20 20:42:46 2013 Romain Arsac
** Last update Thu Mar 28 00:45:50 2013 vivien penel
*/

#include "my.h"
#include "var.h"
#include "dlist.h"
#include "proto.h"
#include "convert_op2.h"
#include "check_args_type.h"

void		convert_and(t_elem *elem)
{
  /**
   ** AND:
   ** 1er param -> T_REG | T_DIR | T_IND
   ** 2eme param -> T_REG | T_IND | T_DIR
   ** 3eme param -> T_REG
   **/
  elem->mnemo = 0x06;
  elem->size_params = 1;
  if (check_reg(elem->arg_1) == 1)
    elem->size_arg_1 = 1;
  else if (check_dir(elem->arg_1) == 1)
    elem->size_arg_1 = 4;
  else if (check_ind(elem->arg_1) == 1)
    elem->size_arg_1 = 2;
  if (check_reg(elem->arg_2) == 1)
    elem->size_arg_2 = 1;
  else if (check_ind(elem->arg_2) == 1)
    elem->size_arg_2 = 2;
  else if (check_dir(elem->arg_2) == 1)
    elem->size_arg_2 = 4;
    elem->size_arg_3 = 1;
}

void		convert_or(t_elem *elem)
{
  /**
   ** OR:
   ** 1er param -> T_REG | T_IND | T_DIR
   ** 2eme param -> T_REG | T_IND | T_DIR
   ** 3eme param -> T_REG
   **/
  elem->mnemo = 0x07;
  elem->size_params = 1;
  if (check_reg(elem->arg_1) == 1)
    elem->size_arg_1 = 1;
  else if (check_ind(elem->arg_1) == 1)
    elem->size_arg_1 = 2;
  else if (check_dir(elem->arg_1) == 1)
    elem->size_arg_1 = 4;
  if (check_reg(elem->arg_2) == 1)
    elem->size_arg_2 = 1;
  else if (check_ind(elem->arg_2) == 1)
    elem->size_arg_2 = 2;
  else if (check_dir(elem->arg_3) == 1)
    elem->size_arg_2 = 4;
    elem->size_arg_3 = 1;
}

void		convert_xor(t_elem *elem)
{
  /**
   ** XOR:
   ** 1er param -> T_REG | T_IND | T_DIR
   ** 2eme param -> T_REG | T_IND | T_DIR
   ** 3eme param -> T_REG
   **/
  elem->mnemo = 0x08;
  elem->size_params = 1;
  if (check_reg(elem->arg_1) == 1)
    elem->size_arg_1 = 1;
  else if (check_ind(elem->arg_1) == 1)
    elem->size_arg_1 = 2;
  else if (check_dir(elem->arg_1) == 1)
    elem->size_arg_1 = 4;
  if (check_reg(elem->arg_2) == 1)
    elem->size_arg_2 = 1;
  else if (check_ind(elem->arg_2) == 1)
    elem->size_arg_2 = 2;
  else if (check_dir(elem->arg_3) == 1)
    elem->size_arg_2 = 4;
  elem->size_arg_3 = 1;
}

void		convert_zjmp(t_elem *elem)
{
  /**
   ** ZJMP:
   ** 1er param -> T_DIR -> INDEX
   ** Pas d'octet de param
   **/
  elem->mnemo = 0x09;
  elem->size_params = 0;
  elem->size_arg_1 = 2;
  elem->size_arg_2 = 0;
  elem->size_arg_3 = 0;
}

void		convert_lld(t_elem *elem)
{
  /**
   ** XOR:
   ** 1er param -> T_DIR | T_IND
   ** 2eme param -> T_REG
   **/
  if (check_dir(elem->arg_1) == 1)
    elem->size_arg_1 = 4;
  else if (check_ind(elem->arg_1) == 1)
    elem->size_arg_1 = 2;
  if (check_reg(elem->arg_2) == 1)
    elem->size_arg_2 = 1;
}
