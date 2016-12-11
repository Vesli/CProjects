/*
** convert_little_endian.c for asm in /home/arsac_r/corewar-asm
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Mon Mar 25 18:16:07 2013 Romain Arsac
** Last update Mon Mar 25 21:51:59 2013 Romain Arsac
*/

int		convert_little(int nb)
{
  int		nb_final;

  nb_final = (nb & 0xff) << 24;
  nb_final += (nb & 0xff00) << 8;
  nb_final += (nb & 0xff0000) >> 8;
  nb_final += (nb >> 24) & 0xff;
  return (nb_final);
}
