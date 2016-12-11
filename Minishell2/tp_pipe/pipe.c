/*
** pipe.c for pipe in /home/passep_j//Semestre2_Projets/Secondary_Projects/Minishell2/tp_pipe
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Mon Feb 18 10:00:09 2013 jean-charles passepont
** Last update Tue Feb 26 13:44:03 2013 jean-charles passepont
*/

#include <unistd.h>
#include <stdlib.h>

int	my_pipe1()
{
  int	pipefd[2];
  int	pid;
  int	len;
  char	buf[512];

  len = read(0, buf, 511);
  printf("j'écris dans le pipe : %s\n", buf);
  buf[len] = '\0';
  close(pipefd[0]);
  my_putstr("j'ai lu sur le pipe : ");
  write(pipoefd[1], buf, my_strlen(buf));
  close(pipefd[1]);
}

int	main(int ac, char **av)
{
  my_pipe1();
}
