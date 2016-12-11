/*
** get_next_line.c for get_next_line in /home/passep_j//test_en_vrac/get_next_line
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Mon Feb 25 14:45:48 2013 jean-charles passepont
** Last update Mon Mar 18 02:04:18 2013 Romain Arsac
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "my.h"

int	fonc(int i, char *str, char c)
{
  while (str && str[i])
    {
      if (str[i] == c)
	return (i);
      i++;
    }
  return (-1);
}

int	remplis_buff(char **buff, const int fd)
{
  char	tab[4097];
  char	*tmp;
  int	ret;

  while ((ret = read(fd, tab, 4096)) > 0)
    {
      tab[ret] = '\0';
      tmp = malloc(my_strlen(*buff) + my_strlen(tab) + 1);
      my_strcpy(tmp, *buff);
      my_strcat(tmp, tab);
      free(*buff);
      *buff = xmalloc(my_strlen(tmp) + 1);
      my_strcpy(*buff, tmp);
      free(tmp);
      if (fonc(0, *buff, '\n') != -1)
	return (0);
    }
  if (ret < 0 || (ret == 0 && *buff == 0))
    return (1);
  return (0);
 }

char	*get_next_line(const int fd)
{
  static char	*buff = NULL;
  char		*line;
  int		i;

  if ((fd < 0) || (remplis_buff(&buff, fd) != 0))
    {
      free(buff);
      buff = NULL;
      return (NULL);
    }
  if ((i = (fonc(0, buff, '\n'))) != -1)
    {
      line = xmalloc(i + 1);
      my_strncpy(line, buff, i);
      my_strcpy(buff, buff + i + 1);
    }
  else
    {
      line = my_strdup(buff);
      free(buff);
      buff = NULL;
    }
  return (line);
}
