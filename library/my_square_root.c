/*
** my_square_root.c for my_square_root in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Oct  9 22:27:20 2012 jean-charles passepont
** Last update Tue Oct  9 22:33:57 2012 jean-charles passepont
*/

int	my_square_root(int nb)
{
  int	a;
  int	c;

  a = 1;
  c = 1;
  while (a * c != nb)
    {
      c = c + 1;
      a = a + 1;
      if (a * c == nb)
	{
	  return (a);
	}
      if (a * c != nb || nb <= 0)
	{
	  return (0);
	}
    }
}
