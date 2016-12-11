/*
** my_strcpy.c for my_strcpy in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Oct  9 15:16:25 2012 jean-charles passepont
** Last update Mon Feb 25 15:41:23 2013 jean-charles passepont
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (dest && src && src[i])
    {
      dest[i] = src[i];
      i++;
    }
  if (dest)
    dest[i] = 0;
  return (dest);
}
