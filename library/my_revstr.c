/*
** my_revstr.c for my_revstr in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Wed Oct 10 15:31:46 2012 jean-charles passepont
** Last update Wed Oct 10 15:32:49 2012 jean-charles passepont
*/

char	*my_revstr(char *str)
{
  int	i;

  i = my_strlen(str) - 1;
  while (str[i] >= 0)
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
