/*
** my_concat.c for asm in /home/penel_v//save_corewar/lib
** 
** Made by vivien penel
** Login   <penel_v@epitech.net>
** 
** Started on  Wed Mar 27 05:09:11 2013 vivien penel
** Last update Wed Mar 27 18:08:11 2013 vivien penel
*/

#include "my.h"

char	*my_concat(char *dest, char *src)
{
  char	*str;
  int	i;
  int	j;

  str = xmalloc(my_strlen(dest) + my_strlen(src) + 1);
  i = 0;
  j = 0;
  while (dest[i])
    str[j++] = dest[i++];
  i = 0;
  while (src[i])
    str[j++] = src[i++];
  str[j] = '\0';
  return (str);
}
