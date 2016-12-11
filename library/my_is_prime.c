/*
** my_is_prime.c for my_is_prime in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Oct  9 21:32:49 2012 jean-charles passepont
** Last update Tue Oct  9 23:56:46 2012 jean-charles passepont
*/

int	  my_is_prime(int nombre)
{
  int	stock;
  int	diviseur;

  stock = 0;
  diviseur = 1;
  while (diviseur <= nombre)
    {
      if (nombre % diviseur == 0)
	{
	  stock = stock + 1;
	}
      if (stock > 2)
	{
	  return (0);
	}
      diviseur = diviseur + 1;
    }
  if (stock == 2)
    {
      return (1);
    }
}
