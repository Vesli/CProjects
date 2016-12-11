/*
** main.c for main in /home/passep_j//Semestre2_Projets/Secondary_Projects/Alum-1/allum_text
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Jan 22 14:07:56 2013 jean-charles passepont
** Last update Fri Feb 15 16:30:55 2013 jean-charles passepont
*/

#include  <unistd.h>
#include  <stdlib.h>
#include  "proto.h"

void    end(int *allum)
{
  if (*allum == 0)
  {
    my_printf("\n------------------------------\nEnd of the game !");
    my_printf("\n------------------------------\n");
    exit(1);
  }
}

int     start(char *order,int *allum)
{
  int	  a;

  a = 0;
  my_printf("\n %d matches are in game\n\n", *allum);
  while (a != *allum)
  {
    my_putchar('|');
    a++;
  }
  my_printf("\n------------------------------\n");
  my_printf("\nYour turn player !\n");
  return (1);
}

void    rules(char *order, int *allum)
{
  my_printf("\n¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤\n");
  my_printf("Welcome in the Matches game ! \n");
  my_printf("\n20 matches are at your disposal, ");
  my_printf("you can choose between 1 to 3 matches\n");
  my_printf("\nPlayer who's choosing the last one lose !\n");
  my_printf("\n Good Luck ;)\n¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤\n");
  start(order, allum);
}

void    init_second(char *order, int allum, int lu, int *i)
{
  if ((my_strncmp(order, "rules", 5)) == 0)
  {
    rules(order, &allum);
    *i = 1;
  }
  else if ((my_strncmp(order, "play", 4)) == 0)
  {
    start(order, &allum);
    *i = 2;
  }
  else
  {
    my_printf("type \"rules\" or \"play\" (start the game)\n");
    lu = read(0, order, 4096) != -1;
  }
}

void    init()
{
  int   allum;
  int	  lu;
  char	order[4097];
  int	  i;
  int	  b;

  b = 1;
  i = 0;
  allum = 20;
  while (allum >= 0)
  {
    lu = read(0, order, 4096) != -1;
    while (i == 0)
  	{
  	  init_second(order, allum, lu, &i);
  	}
    if (b == 1)
    	player(order, &allum, &b);
    if (b == 0)
  	{
  	  i_a(&allum);
  	  b = 1;
  	}
    lu = 0;
  }
}

int	main(int ac, char **av)
{
  my_printf("Type \"rules\" or \"play\"\n");
  init();
}
