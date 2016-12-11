/*
** my_str_isnum.c for my_str_isnum in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Thu Oct 11 23:08:35 2012 jean-charles passepont
** Last update Fri Oct 12 10:05:36 2012 jean-charles passepont
*/

int	    my_str_isnum(char *str)
{
  char	j;

  j = 0;
  while (str[j] != 0)
    {
      while (str[j] >= '0' && str[j] <= '9')
        {
          j = j + 1;
          if (str[j] == '\0')
            {
              return (1);
            }
          if ((str[j] >= 1 && str[j] <= 47) 
	      || (str[j] >= 58 && str[j] <= 126))
            {
              return (0);
            }
        }
      j = j + 1;
    }
}
