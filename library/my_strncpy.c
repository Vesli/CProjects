/*
** my_strncpy.c for my_strncpy in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Oct  9 15:08:23 2012 jean-charles passepont
** Last update Mon Feb 25 15:42:30 2013 jean-charles passepont
*/

char	*my_strncpy(char *dest, char *src, int nb)
{
  int	i;

  i = 0;
  while (dest && src && src[i] && (i < nb))
    {
      dest[i] = src[i];
      i++;
    }
  if (dest)
    dest[i] = 0;
  return (dest);
}
