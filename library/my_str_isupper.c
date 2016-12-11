/*
** my_str_isupper.c for my_str_isupper in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Oct 12 10:21:11 2012 jean-charles passepont
** Last update Fri Oct 12 10:53:38 2012 jean-charles passepont
*/

int		my_str_isupper(char *str)
{
  char	k;

  k = 0;
  while (str[k] != 0)
    {
      while (str[k] >= 'A' && str[k] <= 'Z')
	{
	  k = k + 1;
	  if (str[k] == '\0')
	    {
	      return (1);
	    }
	  if ((str[k] >= 1 && str[k] <= 64) || (str[k] >= 91 && str[k] <= 126))
	    {
	      return (0);
	    } 
	}
      k = k + 1;
    }
}
