/*
** main.c for main in /home/passep_j//Semestre2_Projets/Secondary_Projects/MiniTalk
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Feb 22 12:14:01 2013 jean-charles passepont
** Last update Wed Mar 20 15:35:57 2013 jean-charles passepont
*/

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

void    aff_letters(char *c)
{
  char	nb;
  int	  pile;
  int	  nbr;
  int	  i;

  nb = 0;
  i = 0;
  nbr = 256;
  while (i <= 9)
  {
    if (c[i] == 1)
      nb += c[i] * nbr;
    ++i;
    nbr = nbr / 2;
  }
  i = 0;
  my_putchar(nb);
}

void    treat_it(int sig)
{
  static  int	i;
  static  char	*c;

  if (c == NULL)
    c = malloc(sizeof(char) + 1);
  if (sig == SIGUSR1)
  {
    c[i] = 0;
    ++i;
  }
  else if (sig == SIGUSR2)
  {
    c[i] = 1;
    ++i;
  }
  if (i == 9)
  {
    aff_letters(c);
    i = 0;
  }
}

int     main(int ac, char **av)
{
  pid_t	pid;

  my_printf("Pid serveur : %d\n", getpid());
  while (42)
  {
    signal(SIGUSR1, treat_it);
    signal(SIGUSR2, treat_it);
    pause();
  }
  return (0);
}
