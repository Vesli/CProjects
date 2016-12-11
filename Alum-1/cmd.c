/*
** cmd.c for cmd in /home/passep_j//Semestre2_Projets/Secondary_Projects/Alum-1/allum_text
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Jan 22 14:20:51 2013 jean-charles passepont
** Last update Fri Feb 15 16:34:30 2013 jean-charles passepont
*/

#include <string.h>
#include <stdlib.h>
#include "proto.h"

int	error3(int *allum)
{
  if (*allum <= 3)
    {
      my_printf("\nThere is only %d matches\n", *allum);
      my_printf("\n------------------------------\n");
      return (0);
    }
  return (0);
}

int	choose_3(int *allum, int *b)
{
  *allum -= 3;
  aff_allum_player(allum);
  *b = 0;
  return (0);
}

int	choose_2(int *allum, int *b)
{
  *allum -= 2;
  aff_allum_player(allum);
  *b = 0;
  return (0);
}

int	choose_1(int *allum, int *b)
{
  *allum -= 1;
  aff_allum_player(allum);
  *b = 0;
  return (0);
}

int	player(char *order, int *allum, int *b)
{
  if (my_strncmp(order, "1\n", 1) == 0)
    choose_1(allum, b);
  else if (my_strncmp(order, "2\n", 1) == 0)
  {
    if (*allum <= 2)
  	{
  	  my_printf("\nThere is only %d matches\n", *allum);
  	  return (0);
  	}
    choose_2(allum, b);
  }
  else if (my_strncmp(order, "3\n", 1) == 0)
  {
    error3(allum);
    choose_3(allum, b);
  }
  else if (my_strncmp(order, "3\n", 1) != 0 && \
    my_strncmp(order, "2\n", 1) != 0 && my_strncmp(order, "1\n", 1) != 0)
  {
    my_printf("choose between 1 and 3 matches\n");
  }
  if (*allum == 0)
    allum_0(allum);
  return (0);
}
