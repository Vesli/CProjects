/*
** my_strlen.c for my_strlen in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Oct  9 15:34:07 2012 jean-charles passepont
** Last update Wed May  1 18:36:22 2013 jean-charles passepont
*/

int			my_strlen(char const *str)
{
  unsigned	int	j;

  j = 0;
  while (str[j] != '\0')
    {
      j = j + 1;
    }
  return (j);
}
