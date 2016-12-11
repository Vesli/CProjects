/*
** my_strncmp.c for strncmp in /home/arsac_r/
** 
** Made by romain arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Mon Oct  8 16:15:06 2012 romain arsac
** Last update Sun Dec 30 20:51:57 2012 romain arsac
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while ((s1[i] != '\0' || s2[i] != '\0') && i != n)
    {
      if (s1[i] != s2[i])
	{
	  return (s1[i] - s2[i]);
	}
      i = i + 1;
    }
  return (0);
}
