/*
** isalpha.c for my_str_isalpha in /home/passep_j//bordel/test_calcul
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Thu Oct 11 22:45:29 2012 jean-charles passepont
** Last update Fri Oct 12 09:53:31 2012 jean-charles passepont
*/

int	    my_str_isalpha(char *str)
{
  char	i;

  i = 0;
  while (str[i] != '\0')
    {
      while ((str[i] >= 'A' && str[i] <= 'z')
             && (str[i] >= 'a' && str[i] <= 'z') && str[i] != '\0')
        {
          i = i + 1;
          if ((str[i] >= 1 && str[i] <= 64)
              || (str[i] >= 91 && str[i] <= 96)
              || (str[i] >= 123 && str[i] <= 126))
            {
              return (0);
            }
          if (str[i] == '\0')
            {
              return (1);
            }
        }
      i = i + 1;
    }

}
