/*
** my_str_islower.c for my_str_islower in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Oct 12 10:16:59 2012 jean-charles passepont
** Last update Fri Oct 12 10:17:50 2012 jean-charles passepont
*/

int	    my_str_islower(char *str)
{
  char	j;

  j = 0;
  while (str[j] != 0)
    {
      while (str[j] >= 'a' && str[j] <= 'z')
        {
          j = j + 1;
          if (str[j] == '\0')
            {
              return (1);
            }
          if ((str[j] >= 1 && str[j] <= 96) 
	      || (str[j] >= 123 && str[j] <= 126))
            {
              return (0);
            }
        }
      j = j + 1;
    }
}
