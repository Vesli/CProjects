/*
** my_swap.c for my_swap in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Oct  9 15:26:54 2012 jean-charles passepont
** Last update Sat Nov  3 19:30:55 2012 jean-charles passepont
*/

void	my_swap(int *a, int *b)
{
  int	swap;
 
  swap = *b;
  *b = *a;
  *a = swap;
}
