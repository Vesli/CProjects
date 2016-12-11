/*
** my_strlowcase.c for my_strlowcase in /home/passep_j//bordel/test_calcul
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Thu Oct 11 22:33:18 2012 jean-charles passepont
** Last update Thu Oct 11 22:57:38 2012 jean-charles passepont
*/
char    *my_strlowcase(char *str)
{
  char	m;

  m = 0;
  while (str[m] != 0)
    {
      while (str[m] >= 'A' && str[m] <= 'Z' && str[m] != 0)
	{
	  str[m] = str[m] + 32;
	  m = m + 1;
	}
      m = m + 1;
    }
  return (str);
}
