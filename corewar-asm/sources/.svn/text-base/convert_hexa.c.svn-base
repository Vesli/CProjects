/*
** convert_hexa.c for asm in /home/penel_v//save_corewar/sources
** 
** Made by vivien penel
** Login   <penel_v@epitech.net>
** 
** Started on  Wed Mar 27 04:55:13 2013 vivien penel
** Last update Wed Mar 27 17:58:20 2013 vivien penel
*/

#include <stdlib.h>
#include "dlist.h"
#include "my.h"

char	*reg_test(char *str)
{
  int	size;
  char	*hexa;

  if (str)
    {
      size = my_strlen(str);
      hexa = xmalloc(3);
      if (size == 2)
	{
	  hexa[0] = '0';
	  hexa[1] = str[1];
	}
      else
	{
	  hexa[0] = str[1];
	  hexa[1] = str[2];
	}
      hexa[2] = '\0';
    }
  hexa = my_concat("0x", hexa);
  return (hexa);
}

char	*dir_test(char *str)
{ 
  char	*str_cut;

  str_cut = my_eat_head(str, 1);
  str_cut = convert_base(my_getnbr(str_cut), "0123456789abcdef");
  str_cut = my_concat("0x", str_cut);
  return (str_cut);
}
