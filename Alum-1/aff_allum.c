/*
** aff_allum.c for aff_allum in /home/passep_j//Semestre2_Projets/Secondary_Projects/Alum-1/allum_text/termcap
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Thu Feb 14 17:03:15 2013 jean-charles passepont
** Last update Fri Feb 15 16:34:26 2013 jean-charles passepont
*/

#include "proto.h"

void    aff_allum_ia(int *allum)
{
  int	  a;

  a = 0;
  my_putchar('\n');
  while (a != *allum)
  {
    my_putchar('|');
    a++;
  }
  my_putchar('\n');
}

void    aff_allum_player(int *allum)
{
  int	  a;

  a = 0;
  my_putchar('\n');
  while (a != *allum)
  {
    my_putchar('|');
    a++;
  }
  my_putchar('\n');
  my_printf("\n¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤\n");
}
