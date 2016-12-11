/*
** my_putnbr_base.c for my_putnbr_base in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Jan 25 19:22:54 2013 jean-charles passepont
** Last update Wed Jan 30 18:27:22 2013 jean-charles passepont
*/

#include "proto.h"

void    my_putnbr_base2(unsigned int nb, char *base)
{
  if (nb <= 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb / my_strlen(base) > 0)
    {
      my_putnbr_base2(nb / my_strlen(base), base);
    }
  my_putchar(base[nb % my_strlen(base)]);
}

void    my_putnbr_base(int nb, char *base)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb / my_strlen(base) > 0)
    {
      my_putnbr_base(nb / my_strlen(base), base);
    }
  my_putchar(base[nb % my_strlen(base)]);
}
