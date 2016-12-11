/*
** my_strlen.c for my_strlen in /home/arsac_r/semestre2/lib
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Tue Mar 12 00:55:11 2013 Romain Arsac
** Last update Mon Mar 18 02:06:26 2013 Romain Arsac
*/

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str && str[i])
    i++;
  return (i);
}
