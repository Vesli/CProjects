/*
** convert_bin.c for convert_bin in /home/passep_j//save/Semestre2_Projets/Secondary_Projects/MiniTalk/client
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Mon Mar 11 23:52:54 2013 jean-charles passepont
** Last update Wed Mar 20 12:28:05 2013 jean-charles passepont
*/

#include <stdio.h>

void    my_putchar(char c)
{
  write(1, &c, 1);
}

int     convert_bin(char *str)
{
  int	  i;
  int	  ascii;
  int	  nbr;

  i = 0;
  while (str[i])
  {
    ascii = str[i];
    nbr = 256;
    while (nbr > 0)
  	{
      if ((ascii - nbr) >= 0)
        {
          my_putchar('1');
          ascii -= nbr;
        }
      else
        my_putchar('0');
      nbr /= 2;
    }
    ++i;
  }
}

int     main(int ac, char **av)
{
  printf("%d\n", convert_bin("c"));
}
