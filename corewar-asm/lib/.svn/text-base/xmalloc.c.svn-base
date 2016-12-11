/*
** malloc_or_die.c for minishell in /home/arsac_r//rendus/minishell/lib
** 
** Made by romain arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Wed Jan 23 22:49:58 2013 romain arsac
** Last update Mon Mar 18 00:25:54 2013 Romain Arsac
*/

#include <stdlib.h>
#include "my.h"

void		*xmalloc(unsigned int size)
{
  void		*elem;

  elem = malloc(size);
  if (elem == NULL)
    {
      my_putstr_error("Error: malloc impossible!\n");
      exit(1);
    }
  return (elem);
}


