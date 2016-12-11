/*
** my_str_to_wordtab2.c for my_str_to_wordtab in /home/passep_j//str_to_wordtab
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Wed Dec  5 21:32:28 2012 jean-charles passepont
** Last update Sun Apr  7 18:04:06 2013 jean-charles passepont
*/

#include <stdlib.h>

int	  count_word(char *str)
{
  int	i;
  int	a;

  i = 0;
  a = 0;
  while (str[i] != 0 && str[i] != '\n')
    {
      if (str[i] == ' ' || str[i] == '\t')
	a += 1;
      i++;
    }
  return (a);
}

int	  count_letters(char *str)
{
  int	b;

  b = 0;
  while (str[b] != 0 && str[b] != '\n')
    b++;
  b += 1;
  return (b);
}

char    **my_str_to_wordtab(char *str)
{
  char	**tab;
  int	  i;
  int	  a;
  int	  b;

  i = 0;
  a = 0;
  b = 0;
  tab = malloc(sizeof(char *) * (count_word(str) + 1));
  while (str[i] != 0 && str[i] != '\n')
    {
      if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	{
	  while (str[i] == ' ' || str[i] == '\t')
	    i++;
	  a += 1;
	  b = 0;
	}
      tab[a] = malloc(sizeof(char) * (count_letters(str + i) + 1));
      while ((str[i] != ' ' || str[i] != '\t') && str[i] != '\n' && str[i] != 0)
	tab[a][b++] = str[i++];
      tab[a][b] = 0;
    }
  tab[a + 1] = 0;
  return (tab);
}
