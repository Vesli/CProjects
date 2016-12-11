/*
** check_args_type.c for asm in /home/penel_v//corewar-asm/sources
** 
** Made by vivien penel
** Login   <penel_v@epitech.net>
** 
** Started on  Mon Mar 18 05:20:16 2013 vivien penel
** Last update Thu Mar 21 15:18:46 2013 jean-charles passepont
*/

#include "op.h"
#include "check_args_type.h"
#include "my.h"

int	check_reg(char *str)
{
  int	size;

  if (str)
    {
      size = my_strlen(str);
      if (size >= 2 && size <= 3 && str[0] == 'r')
	{
	  if (size == 2 && str[1] >= '1' && str[1] <= '9')
	    return (1);
	  if (size == 3 && str[1] == '1' && str[2] >= '0' && str[2] <= '6')
	    return (1);
	}
    }
  return (0);
}

int	check_dir(char *str)
{
  int	i;

  if (str && str[0] == DIRECT_CHAR)
    {
      i = 1;
      while (str[i])
	{
	  if (str[i] == DIRECT_CHAR)
	    return (0);
	  i++;
	}
      return (1);
    }
  return (0);
}

int	check_ind(char *str)
{
  if (str && str[0] != DIRECT_CHAR)
    {
      if (check_reg(str) == 0)
	return (1);
    }
  return (0);
}
