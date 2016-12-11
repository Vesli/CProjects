/*
** my_strcapitalize.c for my_strcapitalize in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Oct 12 17:07:32 2012 jean-charles passepont
** Last update Fri Oct 12 17:11:45 2012 jean-charles passepont
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      while (str[i] >= '0' && str[i] <= '9')
	{
	  i = i + 1;
	  while (str[i] >= 'a' && str[i] <= 'z')
	    {
	      i = i + 1;
	    }
	}
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  str[i] = str[i] - 32;
	  i = i + 1;
	  while (str[i] >= 'a' && str[i] <= 'z')
	    {
	      i = i + 1;
	    }
	}
      i = i + 1;
    }
}
