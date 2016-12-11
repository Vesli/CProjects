/*
** my_power_rec.c for my_power_rec in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Oct  9 13:57:12 2012 jean-charles passepont
** Last update Tue Oct  9 13:59:51 2012 jean-charles passepont
*/

int 	my_power_rec(int nb, int power)
{
  int	r;

  r = nb;
  if (power == 0)
    {
      return (1);
    }
  if (power < 0);
  {
    return (0);
  }
  if (power > 1)
    {
      my_power_rec(nb * nb, power - 1);
    }
}
