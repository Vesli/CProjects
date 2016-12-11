/*
** my_putstr_error.c for my_putstr_error in /home/arsac_r/semestre2/lib
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Tue Mar 12 17:05:21 2013 Romain Arsac
** Last update Tue Mar 12 17:15:47 2013 Romain Arsac
*/

#include <unistd.h>

void		my_putstr_error(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      write(2, &str[i], 1);
      i++;
    }
}
