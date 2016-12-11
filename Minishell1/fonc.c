/*
** fonc.c for fonc in /home/passep_j//Projet_Semestre_1/Mini_shell_1
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sat Dec 29 23:56:49 2012 jean-charles passepont
** Last update Sun Dec 30 16:19:37 2012 jean-charles passepont
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      i++;
    }
  return (i);
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (s1[i] && s2[i])
    {
      if (s1[i] > s2[i])
        return (1);
      if (s1[i] < s2[i])
        return (-1);
      i++;
    }
  if (s1[i] > s2[i])
    return (1);
  if (s1[i] < s2[i])
    return (-1);
  return (0);
}

int	my_strncmp(char *s1, char *s2, int n)
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
