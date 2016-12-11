/*
** my_getnbr.c for my_getnbr in /home/passep_j/
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Oct  5 23:59:28 2012 jean-charles passepont
** Last update Mon Oct 22 17:41:52 2012 jean-charles passepont
*/

int   my_getnbr(char *str)
{
  int	a;
  int	b;
  int	nbr;

  a = 0;
  b = 0;
  nbr = 0;
  while (str[a] == '+' || str[a] == '-')
    {
      if (str[a] == '-')
	{
	  b = !b;
	}
      a = a + 1;
    }
  while (str[a] <= '9' && str[a] >= '0')
    {
      nbr = nbr * 10;
      nbr = nbr + (str[a] - 48);
      a = a + 1;
    }
  if (b == 1)
    {
      nbr = nbr * (-1);
    }
  return (nbr);
}
