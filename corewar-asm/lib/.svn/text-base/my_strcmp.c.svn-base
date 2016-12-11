/*
** cmp.c for my_strcmp in /home/passep_j//bordel/Jour_06
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Thu Oct 25 11:29:11 2012 jean-charles passepont
** Last update Thu Mar 21 15:19:21 2013 jean-charles passepont
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	j;
  int	save;

  i = 0;
  save = 0;
  j = 0;
  while ((s1 && s2) && (s1[i] != 0 && s2[j] != 0))
    {
      if (s1[i] > s2[j])
	{
	  save = s1[i] - s2[j];
	  return (save);
	}
      if (s1[i] == 0 && s1[i] == s2[j])
	{
	  save = s1[i] - s2[j];
	  return (save);
	}
      if (s1[i] < s2[j])
	{
	  save = s1[i] - s2[j];
	  return (save);
	}
      j = j + 1;
      i = i + 1;
    }
  return (-1);
}
