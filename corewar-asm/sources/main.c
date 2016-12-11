/*
** main.c for asm in /home/arsac_r/corewar-asm/sources
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Sun Mar 17 23:56:00 2013 Romain Arsac
** Last update Thu Mar 21 15:29:45 2013 jean-charles passepont
*/

#include "my.h"
#include "var.h"
#include "dlist.h"
#include "proto.h"

int		main(int ac, char **av)
{
  t_var		var;
  t_dlist	dlist;

  var.av = av;
  dlist_init(&dlist);
  if (ac > 1)
    {
      if (open_file(&var, &dlist) == ERROR_OPEN_FILE)
	my_putstr_error("This file doesn't exist!\n");
    }
  return (0);
}
