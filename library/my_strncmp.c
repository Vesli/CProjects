/*
** my_strncmp.c for my_strncmp in /home/passep_j//test_en_vrac/i
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Wed Dec 26 10:50:00 2012 jean-charles passepont
** Last update Wed Dec 26 11:56:58 2012 jean-charles passepont
*/

int	  my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (s1[i] != 0 && i <= n)
    {
      while (s2[i] != 0 && i <= n)
	{
	  j += s1[i] - s2[i];
	  i++;
	}
      i++;
    }
  if (j == 0)
    return (j);
  else
    return (42);
}
