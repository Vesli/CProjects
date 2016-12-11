/*
** my_str_to_wordtab_last.c for my_str_to_wordtab in /home/arsac_r//piscine/a verifier/jour_08/ex_04
** 
** Made by romain arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Wed Oct 17 16:35:12 2012 romain arsac
** Last update Sun Mar 10 19:08:55 2013 romain arsac
*/

#include <stdlib.h>
#include "my.h"

int	check_carac_spec(char c, char c_comp)
{
  if (c != c_comp)
    {
      return (1);
    }
  return (0);
}

int	count_words_spec(char *str, char c_comp)
{
  int	i;
  int	nb_words;

  i = 0;
  nb_words = 0;
  while (str[i] != '\0')
    {
      if (i > 0 && check_carac_spec(str[i], c_comp))
	{
	  if (!(check_carac_spec(str[i - 1], c_comp)))
	    {
	      nb_words = nb_words  + 1;
	    }
	}
      else if (i == 0 && check_carac_spec(str[i], c_comp))
	{
	  nb_words = nb_words + 1;
	}
      i = i + 1;
    }
  return (nb_words);
}

int	fct_two_spec(char **tab, char *str, int size, char c_comp)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 1;
  k = 0;
  while (i < size + 1)
    {
      if (str[i] == '\0')
	{
	  if (j > 1 || check_carac_spec(str[i - 1], c_comp))
	    {
	      tab[k] = malloc(sizeof(char) * (j + 1));
	      if (tab[k] == NULL)
		return (0);
	      k = k + 1;
	    }
	  j = 0;
	}
      j = j + 1;
      i = i + 1;
    }
  tab[k] = malloc(sizeof(char) * 1);
  return (1);
}

void	fct_three_spec(char **tab, char *str, int size, char c_comp)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  while (i < size + 1)
    {
      tab[k][j] = str[i];
      if (str[i] == '\0')
	{
	  if (j > 1 || check_carac_spec(str[i - 1], c_comp))
	    {
	      k = k + 1;
	      j = -1;
	    }
	  j = -1;
	}
      i = i + 1;
      j = j + 1;
    }
  tab[k] = NULL;
}

char	**my_str_to_wordtab_carac(char *str, char c)
{
  int	i;
  char	**tab;
  int	size;

  i = 0;
  tab = malloc(sizeof(char *) * (count_words_spec(str, c) + 1));
  size = my_strlen(str);
  if (tab == NULL)
    {
      return (0);
    }
  while (i < size)
    {
      if (!(check_carac_spec(str[i], c)))
	{
	  str[i] = '\0';
	}
      i = i + 1;
    }
  if (!fct_two_spec(tab, str, size, c))
    return (NULL);
  fct_three_spec(tab, str, size, c);
  return (tab);
}

