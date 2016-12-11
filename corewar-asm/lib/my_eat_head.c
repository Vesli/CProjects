/*
** my_eat_head.c for asm in /home/penel_v//save_corewar/lib
** 
** Made by vivien penel
** Login   <penel_v@epitech.net>
** 
** Started on  Wed Mar 27 05:24:57 2013 vivien penel
** Last update Wed Mar 27 18:07:54 2013 vivien penel
*/

#include <stdio.h>
#include "my.h"

char	*my_eat_head(char *str, int nb)
{
  char	*new_str;
  int	size;
  int	i;
  int	j;
  
  new_str = NULL;
  if (nb < my_strlen(str))
    {
      size = my_strlen(str) - nb;
      new_str = xmalloc(size + 1);
      j = 0;
      i = nb;
      while (str[i])
	new_str[j++] = str[i++];
      new_str[j] = '\0';
    }
  return (new_str);
}
