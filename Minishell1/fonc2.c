/*
** fonc2.c for fonc2 in /home/passep_j//Projet_Semestre_1/Mini_shell_1
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Dec 30 00:07:48 2012 jean-charles passepont
** Last update Sun Dec 30 19:21:07 2012 jean-charles passepont
*/

#include <stdlib.h>

char	*my_strcat(char *dest, char *src)
{
  int	j;
  int	i;

  i = 0;
  while (dest[i] != '\0')
    i++;
  j = 0;
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i] = '\0';
  return (dest);
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}

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
