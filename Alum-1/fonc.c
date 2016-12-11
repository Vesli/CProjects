/*
** fonc.c for fonc in /home/passep_j//.ssh/allum1-2017-passep_j
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Feb 15 16:00:47 2013 jean-charles passepont
** Last update Fri Feb 15 16:38:07 2013 jean-charles passepont
*/

#include <unistd.h>

void    my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putstr(char *str)
{
  int	  i;

  i = 0;
  while (str[i])
  {
    my_putchar(str[i]);
    ++i;
  }
}

int	    my_strlen(char *str)
{
  int	  i;

  i = 0;
  while (str[i])
    ++i;
  return (i);
}

int	    my_strncmp(char *s1, char *s2, int n)
{
  int	  i;
  int	  j;

  i = 0;
  j = 0;
  while (s1[i] != 0 && i <= n)
  {
    while (s2[i] != 0 && i <= n)
  	{
  	  j += s1[i] - s2[i];
  	  ++i;
  	}
    ++i;
  }
  if (j == 0)
    return (j);
  else
    return (42);
}

void    my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb / 10 > 0)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar((nb % 10) + 48);
}


