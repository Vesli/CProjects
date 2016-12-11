/*
** rgb.c for rgb in /home/passep_j//save/Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sat Mar 16 18:19:17 2013 jean-charles passepont
** Last update Sat Mar 16 18:22:37 2013 jean-charles passepont
*/

#include "my.h"

int	r_func(char *buff, int lu)
{
  char	tmp[4];
  int	v;

  v = 0;
  lu += 1;
  while (buff[lu] != ' ')
    {
      if (buff[lu] >= '0' && buff[lu] <= '9')
	{
	  tmp[v] = buff[lu];
	  v++;
	}
      lu++;
    }
  tmp[v] = 0;
  return (my_getnbr(tmp));
}

int	g_func(char *buff, int lu)
{
  char	tmp[4];
  int	v;

  v = 0;
  lu += 1;
  while (buff[lu] != ' ')
    {
      if (buff[lu] >= '0' && buff[lu] <= '9')
	{
	  tmp[v] = buff[lu];
	  v++;
	}
      lu++;
    }
  tmp[v] = 0;
  return (my_getnbr(tmp));
}

int	b_func(char *buff, int lu)
{
  char	tmp[4];
  int	v;

  v = 0;
  lu += 1;
  while (buff[lu] != '\n' && buff[lu] != '\0')
    {
      if (buff[lu] >= '0' && buff[lu] <= '9')
	{
	  tmp[v] = buff[lu];
	  v++;
	}
      lu++;
    }
  tmp[v] = 0;
  return (my_getnbr(tmp));
}
