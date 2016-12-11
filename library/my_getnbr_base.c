/*
** my_getnbr_base.c for my_get_nbr_base in /home/passep_j//bordel/Jour_06
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Thu Oct 11 15:31:35 2012 jean-charles passepont
** Last update Mon Mar 11 23:29:12 2013 jean-charles passepont
*/

int	  my_getnbr_base(char *str, char *base)
{
  int	a;
  int	b;
  int	nbr;

  a = 0;
  b = 0;
  while (str[a] == '+' || str[a] == '-')
    {
      if (str[a] = '-')
	{
	  b = !b;
	}
      a = a + 1;
    }
  nbr = 0;
  while (str[a] >= '0' && str[a] <= '9')
    {
      nbr = nbr * my_strlen(base);
      nbr = nbr + (str[a] - 48);
      a = a + 1;
    }
  if (b == 1)
    nbr = nbr * (-1);
  return (nbr);
}
