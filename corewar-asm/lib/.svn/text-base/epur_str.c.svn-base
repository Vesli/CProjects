/*
** epur_str.c for epur_str in /home/arsac_r//semestre2/minishell/lib
** 
** Made by romain arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Thu Mar  7 14:07:16 2013 romain arsac
** Last update Mon Mar 18 00:29:27 2013 Romain Arsac
*/

#include "my.h"

char		*epur_str(char *str)
{
  int		i;
  int		j;
  char		*str_final;

  i = 0;
  j = 0;
  str_final = xmalloc(sizeof(char) * (my_strlen(str) + 1));
  while (str && (str[j] == ' ' || str[j] == '\t'))
    j++;
  while (str && str[j])
    {
      if (str[j] != ' ' && str[j] != '\t')
	str_final[i++] = str[j];
      else if (str[j + 1] != ' ' && str[j + 1] != '\t' && str[j + 1])
	str_final[i++] = ' ';
      j++;
    }
  str_final[i] = '\0';
  return (str_final);
}
