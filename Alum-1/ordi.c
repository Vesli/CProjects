/*
** ordi.c for ordi in /home/passep_j//Semestre2_Projets/Secondary_Projects/Alum-1/allum_text
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Wed Jan 23 20:59:38 2013 jean-charles passepont
** Last update Fri Feb 15 16:34:30 2013 jean-charles passepont
*/

#include "proto.h"

int   this(int *allum)
{
  my_printf("\n %d matches are in game\n\n", *allum);
  my_printf("I lost !\n");
  return (0);
}

int   i_a(int *allum)
{
  int	*take;

  if (*allum > 2)
  {
    *take = *allum;
    *take = *take % 4;
    *allum -= *take;
    my_printf("\nI took %d matches\n", *take);
    my_printf("\n------------------------------\n");
  }
  else if (*allum == 1)
  {
    my_printf("I took %d matches\n", *allum);
    *allum -= 1;
    this(allum);
    end(allum);
  }
  else if (*allum == 2)
  {
    *allum -= 1;
    my_printf("\nI took %d matches ;)\n", *allum);
  }
  my_printf("\nYour turn. %d matches left \n\n", *allum);
  aff_allum_ia(allum);
  return (0);
}
