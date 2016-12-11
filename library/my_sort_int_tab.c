/*
** my_sort_int_tab.c for exo_5_j04 in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Oct  9 11:01:49 2012 jean-charles passepont
** Last update Tue Oct  9 13:52:45 2012 jean-charles passepont
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	a;

  a = 0;
  while (a < size)
    {
      if (tab[a] > tab[a + 1])
	{
	  my_swap(&tab[a], &tab[a + 1]);
	  a = a - 1;
	}
      if (tab[a] < tab[a + 1])
	{
	  a = a + 1;
	}
    }
}
