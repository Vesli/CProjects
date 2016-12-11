/*
** open_file.c for asm in /home/arsac_r/corewar-asm/sources
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Sun Mar 17 23:58:58 2013 Romain Arsac
** Last update Wed Mar 27 14:28:22 2013 jean-charles passepont
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"
#include "var.h"
#include "dlist.h"
#include "proto.h"

int		add_s(t_var *var)
{
  char		*ps;
  int		i;

  i = 1;
  ps = xmalloc(sizeof(var->av[i] + 2));
  my_strcat(var->av[i], ".s");
  my_strcat(ps, var->av[i]);
  if ((var->fd_src = open(ps, O_RDONLY)) != -1)
    {
      free(ps);
      return (0);
    }
  else
    {
      free(ps);
      return (ERROR_OPEN_FILE);
    }
}

int		open_file(t_var *var, t_dlist *dlist)
{
  int		i;
  int		len;

  i = 1;
  while (var->av[i] != NULL)
    {
      len = my_strlen(var->av[i]);
      if (len >= 2 && var->av[i][len - 1] == 's' && var->av[i][len - 2] == '.')
	{
	  var->fd_src = open(var->av[i], O_RDONLY);
	  if (var->fd_src == -1)
	    {
	      return (ERROR_OPEN_FILE);
	    }
	  read_it(var, dlist);
	}
      else
	{
	  add_s(var);
	  read_it(var, dlist);
	}
      i++;
    }
  close(var->fd_src);
  return (0);
}
