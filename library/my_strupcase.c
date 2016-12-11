/*
** my_strupcase.c for my_strupcase in /home/passep_j//bordel/test_calcul
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Thu Oct 11 17:00:42 2012 jean-charles passepont
** Last update Thu Oct 11 22:56:36 2012 jean-charles passepont
*/

char	*my_strupcase(char *str)
{
  char	l;

  l = 0;
  while (str[l] != 0)
    {
      while (str[l] >= 'a' && str[l] <= 'z' && str[l] != 0)
	{
	  str[l] = str[l] - 32;
	  l = l + 1;
	}
      l = l + 1;
    }
  return (str);
}
