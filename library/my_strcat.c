/*
** my_strcat.c for my_strcat in /home/passep_j//test_en_vrac/cat
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Dec 28 13:20:05 2012 jean-charles passepont
** Last update Mon Feb 25 15:47:21 2013 jean-charles passepont
*/

char	*my_strcat(char *dest, char *src)
{
  return (my_strcpy(dest + my_strlen(dest), src));
}
