/*
** main.c for main in /home/passep_j//save/Semestre2_Projets/Secondary_Projects/MiniTalk/client
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Mon Mar 11 21:18:43 2013 jean-charles passepont
** Last update Wed Mar 20 15:07:07 2013 jean-charles passepont
*/

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>

void    client(char *str, int pid)
{
  int	  i;
  int	  ascii;
  int	  nbr;

  i = 0;
  while (str[i])
  {
    ascii = str[i];
    nbr = 256;
    while (nbr > 0)
  	{
      usleep(3500);
      if ((ascii - nbr) >= 0)
	    {
	      kill(pid, SIGUSR2);
	      ascii -= nbr;
	    }
      else
	      kill(pid, SIGUSR1);
      nbr = nbr / 2;
    }
    ++i;
  }
}

int     main(int ac, char **av)
{
  client(av[1], my_getnbr(av[2]));
  client("\n", my_getnbr(av[2]));
}
