/*
** pars.c for pars in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Wed Feb 20 14:25:58 2013 jean-charles passepont
** Last update Wed Mar 13 00:08:03 2013 jean-charles passepont
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include "struct.h"

int	put_rayon(char *buff, int lu)
{
  char	tmp[4];
  int	v;

  v = 0;
  lu += 2;
  while (buff[lu] != ' ')
    {
      tmp[v] = buff[lu];
      lu++;
      v++;
    }
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
      lu++;
      v++;
    }
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
      lu++;
      v++;
    }
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
      lu++;
      v++;
    }
  return (my_getnbr(tmp));
}

int	r_func(char *buff, int lu)
{
  char	tmp[4];
  int	v;

  v = 0;
  lu += 2;
  while (buff[lu] != ' ')
    {
      tmp[v] = buff[lu];
      lu++;
      v++;
    }
  return (my_getnbr(tmp));
}

int	g_func(char *buff, int lu)
{
  char	tmp[4];
  int	v;

  v = 0;
  lu += 2;
  while (buff[lu] != ' ')
    {
      tmp[v] = buff[lu];
      lu++;
      v++;
    }
  return (my_getnbr(tmp));
}

int	b_func(char *buff, int lu)
{
  char	tmp[4];
  int	v;

  v = 0;
  lu += 2;
  while (buff[lu] != '\n')
    {
      tmp[v] = buff[lu];
      lu++;
      v++;
    }
  return (my_getnbr(tmp));
}

int	my_read(t_draw *draw)
{
  int	lu;
  int	fd;
  char	buff[4096];

  fd = open("info", O_RDONLY);
  lu = read(fd, buff, 4095);
  buff[lu] = '\0';
  lu = 0;
  while (buff[lu] != 0)
    {
      if (buff[0] == 'S')
	{
	  draw->form = 0;
	  if (buff[lu] == 'R')
	    draw->Rs = put_rayon(buff, lu);
	  if (buff[lu] == 'x')
	    draw->xs = coor_x(buff, lu);
	  if (buff[lu] == 'y')
	    draw->ys = coor_y(buff, lu);
	  if (buff[lu] == 'z')
	    draw->zs = coor_z(buff, lu);
	  if (buff[lu] == 'r')
	    draw->r = r_func(buff, lu);
	  if (buff[lu] == 'g')
	    draw->g = g_func(buff, lu);
	  if (buff[lu] == 'b')
	    draw->b = b_func(buff, lu);
	}
      else if (buff[0] == 'C')
	{
	  draw->form = 1;
	  if (buff[lu] == 'R')
	    draw->Rc = put_rayon(buff, lu);
	  if (buff[lu] == 'x')
	    draw->xc = coor_x(buff, lu);
	  if (buff[lu] == 'y')
	    draw->yc = coor_y(buff, lu);
	  if (buff[lu] == 'r')
	    draw->r = r_func(buff, lu);
	  if (buff[lu] == 'g')
	    draw->g = g_func(buff, lu);
	  if (buff[lu] == 'b')
	    draw->b = b_func(buff, lu);
	}
      lu++;
    }
  close(fd);
}
