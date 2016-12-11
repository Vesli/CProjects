/*
** my_strdup.c for my_strdup in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Mon Feb 25 15:50:49 2013 jean-charles passepont
** Last update Mon Feb 25 15:51:30 2013 jean-charles passepont
*/

#include <stdlib.h>

char	*my_strdup(char *str)
{
  char	*list;

  if ((list = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
    {
      write(2, "Erreur de malloc\n", my_strlen("Erreur de malloc\n"));
      return (0);
    }
  my_strcpy(list, str);
  return (list);
}

