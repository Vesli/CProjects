/*
** my_putstr.c for my_putstr in /home/arsac_r/semestre2/lib
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Mon Mar 11 20:22:14 2013 Romain Arsac
** Last update Mon Mar 11 20:23:17 2013 Romain Arsac
*/

#include <unistd.h>

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str && str[i] != '\0')
    {
      write(1, &str[i], 1);
      i++;
    }
}
