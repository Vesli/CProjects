/*
** my_pipe2.c for my_pipe2 in /home/passep_j//Semestre2_Projets/Secondary_Projects/Minishell2/tp_pipe
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Feb 26 13:24:22 2013 jean-charles passepont
** Last update Tue Feb 26 13:38:27 2013 jean-charles passepont
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	my_pipe1()
{
  int	status;
  int	pipefd[2];
  pid_t	pid;
  int	len;
  char	buf[512];

  pid = fork();
  if (pid == 0)
    {
      len = read(0, buf, 511);
      printf("j'écris dans le pipe : %s\n", buf);
      buf[len] = '\0';
      close(pipefd[0]);
    }
  else if (pid == -1)
    my_putstr("Error : no child pricess is created");
  else
    {
      my_putstr("j'ai lu sur le pipe : ");
      write(pipefd[1], buf, my_strlen(buf));
      close(pipefd[1]);
      wait(&status);
    }
}

int	main(int ac, char **av)
{
  my_pipe1();
}
