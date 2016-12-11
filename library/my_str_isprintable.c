/*
** my_str_isprintable.c for my_str_isprintable in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Oct 12 10:26:40 2012 jean-charles passepont
** Last update Fri Oct 12 10:51:02 2012 jean-charles passepont
*/

int		my_str_isprintable(char *str)
{
  char	x;

  x = 0;
  while (str[x] != 0)
    {
      while (str[x] >= 33 && str[x] <= 126)
	{
	  x = x + 1;
	  if (str[x] == '\0')
	    {
	      return (1);
	    }
	  if (str[x] >= 1 && str[x] <= 32)
	    {
	      return (0);
	    }
	}
      x = x + 1;
    }
}
