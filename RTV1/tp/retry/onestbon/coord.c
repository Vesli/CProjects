/*
** coord.c for coord in /home/passep_j//save/Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sat Mar 16 18:18:50 2013 jean-charles passepont
** Last update Sat Mar 16 18:44:27 2013 jean-charles passepont
*/

#include "my.h"

int	put_rayon(char *buff, int lu)
{
  char	tmp[4];
  int	v;

  v = 0;
  lu += 1;
  while (buff[lu] != ' ')
    {
      tmp[v] = buff[lu];
      v++;
      lu++;
    }
  tmp[v] = 0;
  return (my_getnbr(tmp));
}

int	coor_x(char *buff, int lu)
{
  char	tmp[4];
  int	v;

  v = 0;
  lu += 1;
  while (buff[lu] != ' ')
    {
      tmp[v] = buff[lu];
      v++;
      lu++;
    }
  tmp[v] = 0;
  return (my_getnbr(tmp));
}

int	coor_y(char *buff, int lu)
{
  char	tmp[4];
  int	v;

  v = 0;
  lu += 1;
  while (buff[lu] != ' ')
    {
      tmp[v] = buff[lu];
      v++;
      lu++;
    }
  tmp[v] = 0;
  return (my_getnbr(tmp));
}

int	coor_z(char *buff, int lu)
{
  char	tmp[4];
  int	v;

  v = 0;
  lu += 1;
  while (buff[lu] != ' ')
    {
      tmp[v] = buff[lu];
      v++;
      lu++;
    }
  tmp[v] = 0;
  return (my_getnbr(tmp));
}
