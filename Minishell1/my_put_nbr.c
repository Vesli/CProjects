/*
** my_put_nbr.c for my_put_nbr in /home/passep_j//bordel/library
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Oct  9 15:22:29 2012 jean-charles passepont
** Last update Sun Dec 30 16:08:07 2012 jean-charles passepont
*/

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb / 10 > 0)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar((nb % 10) + 48);
}

void	my_putnbr_base2(unsigned int nb, char *base)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb / my_strlen(base) > 0)
    {
      my_put_nbr(nb / my_strlen(base));
    }
  my_putchar(base[nb % my_strlen(base)]);
}

void	my_putnbr_base(int nb, char *base)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb / my_strlen(base) > 0)
    {
      my_put_nbr(nb / my_strlen(base));
    }
  my_putchar(base[nb % my_strlen(base)]);
}
