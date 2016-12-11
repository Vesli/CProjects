/*
** my_isneg.c for my_isneg in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Oct  9 15:21:02 2012 jean-charles passepont
** Last update Tue Oct  9 15:21:57 2012 jean-charles passepont
*/

int	my_isneg(int nb)
{
  if (nb < 0)
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
}
