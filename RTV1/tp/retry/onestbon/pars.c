/*
** pars.c for pars in /home/passep_j//save/Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Mar 10 17:23:55 2013 jean-charles passepont
** Last update Sat Mar 16 18:45:01 2013 jean-charles passepont
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "list.h"
#include "my.h"

void		add_coord(t_list *list, t_elem *tmp, char *buff, int i)
{
  (void)list;
  while (buff[i] != '\n' && buff[i] != '\0')
    {
      if (buff[i] == 'R')
	tmp->R = put_rayon(buff, i);
      if (buff[i] == 'x')
	tmp->x = coor_x(buff, i);
      if (buff[i] == 'y')
	tmp->y = coor_y(buff, i);
      if (buff[i] == 'z')
	tmp->z = coor_z(buff, i);
      if (buff[i] == 'r')
	tmp->r = r_func(buff, i);
      if (buff[i] == 'g')
	tmp->g = g_func(buff, i);
      if (buff[i] == 'b')
	tmp->b = b_func(buff, i);
      i++;
    }
}

int		name_object(t_list *list, t_elem *tmp, char *buff)
{
  int		i;

  i = 0;
  while (buff[i] != '\0')
    {
      if (buff[i] == 'S')
	{
	  tmp->i = 0;
	  add_coord(list, tmp, buff, i);
      	  tmp->next = malloc(sizeof(t_elem));
	  tmp = tmp->next;
	}
      if (buff[i] == 'P')
      	{
	  tmp->i = 1;
      	  add_coord(list, tmp, buff, i);
	  tmp->next = malloc(sizeof(t_elem));
      	  tmp = tmp->next;
      	}
      if (buff[i] == 'C')
      	{
	  tmp->i = 2;
	  add_coord(list, tmp, buff, i);
	  tmp->next = malloc(sizeof(t_elem));
      	  tmp = tmp->next;
      	}
      if (buff[i] == 'O')
      	{
	  tmp->i = 3;
      	  add_coord(list, tmp, buff, i);
      	  tmp->next = malloc(sizeof(t_elem));
      	  tmp = tmp->next;
      	}
      i++;
    }
  tmp = NULL;
  return (0);
}

void		open_scene(t_draw *draw, t_list *list)
{
  int		lu;
  int		fd;
  char		buff[4097];
  t_elem	*elem;

  elem = malloc(sizeof(t_elem));
  list->first = elem;
  fd = open("scene", O_RDONLY);
  lu = read(fd, buff, 4096);
  buff[lu] = '\0';
  name_object(list, elem, buff);
  init(draw, list, elem);
}
