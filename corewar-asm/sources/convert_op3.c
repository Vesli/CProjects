/*
** convert_op3.c for convert_op3 in /home/passep_j//Corewar/corewar-asm/sources
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Wed Mar 20 20:58:21 2013 jean-charles passepont
** Last update Thu Mar 28 00:45:36 2013 vivien penel
*/

#include "my.h"
#include "var.h"
#include "dlist.h"
#include "proto.h"
#include "convert_op3.h"
#include "check_args_type.h"

void		convert_ldi(t_elem *elem)
{
  /**
   ** LDI:
   ** 1er param -> T_REG | T_DIR | T_IND
   ** 2eme param -> T_DIR | T_REG
   ** 3eme param -> T_REG
   **/
  elem->mnemo = 0x0a;
  elem->size_params = 1;
  if (check_reg(elem->arg_1) == 1)
    elem->size_arg_1 = 1;
  else if (check_dir(elem->arg_1) == 1)
    elem->size_arg_1 = 4;
  else if (check_ind(elem->arg_1) == 1)
    elem->size_arg_1 = 2;
  if (check_dir(elem->arg_2) == 1)
    elem->size_arg_2 = 4;
  else if (check_reg(elem->arg_2) == 1)
    elem->size_arg_2 = 1;
  elem->size_arg_3 = 1;
}

void		convert_sti(t_elem *elem)
{
  /**
   ** STI:
   ** 1er param -> T_REG
   ** 2eme param -> T_REG | T_DIR | T_IND --> INDEX
   ** 3eme param -> T_DIR | T_REG --> INDEX
   **/
  elem->size_params = 1;
  elem->size_arg_1 = 1;
  elem->size_arg_2 = 2;
  elem->size_arg_3 = 2;
}

void		convert_fork(t_elem *elem)
{
  /**
   ** fork:
   ** 1er param -> T_DIR
   **/
  if (check_dir(elem->arg_1) == 1)
    elem->size_arg_1 = 4;
  elem->size_arg_2 = 0;
}

void		convert_lldi(t_elem *elem)
{
  /**
   ** LLDI:
   ** 1er param -> T_REG | T_DIR | T_IND
   ** 2eme param -> T_DIR | T_REG
   ** 3eme param -> T_REG
   **/
  if (check_reg(elem->arg_1) == 1)
    elem->size_arg_1 = 1;
  else if (check_dir(elem->arg_1) == 1)
    elem->size_arg_1 = 4;
  else if (check_ind(elem->arg_1) == 1)
    elem->size_arg_1 = 2;
  if (check_dir(elem->arg_2) == 1)
    elem->size_arg_2 = 4;
  else if (check_reg(elem->arg_2) == 1)
    elem->size_arg_2 = 1;
  if (check_reg(elem->arg_3) == 1)
    elem->size_arg_3 = 1;
}

void		convert_lfork(t_elem *elem)
{
  /**
   ** LFORK
   ** 1er param -> T_DIR
   **/
  if (check_dir(elem->arg_1) == 1)
    elem->size_arg_1 = 4;
}

void		convert_aff(t_elem *elem)
{
  /**
   ** LFORK
   ** 1er param -> T_REG
   **/
  if (check_reg(elem->arg_1) == 1)
    elem->size_arg_1 = 1;
}
