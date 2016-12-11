/*
** dlist.c for asm in /home/arsac_r/corewar-asm/sources
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Mon Mar 18 00:15:08 2013 Romain Arsac
** Last update Wed Mar 20 17:33:21 2013 jean-charles passepont
*/

#include <stdlib.h>
#include "my.h"
#include "var.h"
#include "dlist.h"
#include "proto.h"

void		dlist_init(t_dlist *dlist)
{
  dlist->p_first = NULL;
  dlist->p_last = NULL;
}
