/*
** my_str_to_argtab.c for my_str_to_argtab in /home/passep_j//Projet_Semestre_1/Mini_shell_1/Minishellfinal
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Dec 30 14:47:39 2012 jean-charles passepont
** Last update Sun Dec 30 16:21:46 2012 jean-charles passepont
*/

#include <stdlib.h>

int	count_arg(char *str)
{
  int	i;
  int	a;

  i = 0;
  a = 0;
  while (str[i] != 0 && str[i] != '\n')
    {
      if (str[i] == ' ')
	a += 1;
      i++;
    }
  return (a);
}

int	count_letters_ag(char *str)
{
  int	b;

  b = 0;
  while (str[b] != '\0' && str[b] != '\n')
    b++;
  b++;
  return (b);
}

char	**my_str_to_argtab(char *str)
{
  char	**tab;
  int	i;
  int	a;
  int	b;

  i = 0;
  a = 0;
  b = 0;
  tab = malloc(sizeof(char *) * (count_arg(str) + 1));
  while (str[i] != 0 && str[i] != '\n')
    {
      if (str[i] == ' ' || str[i] == '\n')
	{
	  while (str[i] == ' ')
	    i++;
	  a += 1;
	  b = 0;
	}
      tab[a] = malloc(sizeof(char **) * (count_letters_ag(str + i) + 1));
      while (str[i] != ' ' && str[i] != '\n' && str[i] != 0)
	tab[a][b++] = str[i++];
      tab[a][b] = 0;
    }
  tab[a + 1] = '\0';
  return (tab);
}

