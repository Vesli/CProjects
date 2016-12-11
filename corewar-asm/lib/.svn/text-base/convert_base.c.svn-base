/*
** convert_base.c for convert_base in /home/penel_v//DD/convert_base
** 
** Made by vivien penel
** Login   <penel_v@epitech.net>
** 
** Started on  Wed Mar 27 01:44:24 2013 vivien penel
** Last update Wed Mar 27 18:08:30 2013 vivien penel
*/

#include <stdlib.h>
#include "my.h"

char	*my_concat_char(char *dest, char base)
{
  char	*str;
  int	i;
  int	j;

  str = xmalloc(my_strlen(dest) + 2);
  i = 0;
  j = 0;
  while (dest[i])
    str[j++] = dest[i++];
  str[j++] = base;
  str[j] = '\0';
  return (str);
}

char	*convert_base(int nb, char *base)
{
  int	i;
  int	size;
  char	*str;

  i = 1;
  str = "";
  size = my_strlen(base);
  while (nb / i > size - 1)
    i *= size;
  while (i >= 1)
    {
      str = my_concat_char(str, base[nb / i]);
      nb %= i;
      i /= size;
    }
  return (str);
}
