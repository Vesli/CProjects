/*
** forks.c for forks in /home/passep_j//Projet_Semestre_1/Mini_shell_1/Minishellfinal
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Dec 30 12:52:22 2012 jean-charles passepont
** Last update Thu Mar  7 10:50:30 2013 jean-charles passepont
*/

#include <unistd.h>
#include <stdlib.h>

int	start_forking(char **envp, char *commande)
{
  int	pipefd[2];
  int	status;
  pid_t	pid;

  pid = fork();
  if (pipe(pipefd) != 0)
    {
      my_putstr("error on pipe");
      exit(1);
    }
  if (pid == -1)
    my_putstr("Error : no child process is creadted");
  else if (pid == 0)
    {
      close(pipefd[0]);
      dup2(pipefd[0], 0);
      cmd(envp, commande);
      my_printf("%s : Command not found.\n", commande);
      exit(1);
    }
  else
    {
      close(pipefd[1]);
      dup2(pipefd[1], 1);
      wait(&status);
    }
}

void	aff_prompt(char **envp)
{
  char	commande[4097];
  int	lu;
  int	i;

  i = 0;
  while (i != -1)
    {
      my_putstr("welcome $>");
      if ((lu = (read(0, commande, 4096))) != -1)
	{
	  if (lu == 0)
	    exit(1);
	  if (my_strncmp(commande, "exit", 4) == 0)
	      exit(1);
	  if (my_strncmp(commande, "cd", 2) == 0)
	    my_cd(commande);
	  commande[lu - 1] = '\0';
	  if (my_strncmp(commande, "cd", 2) != 0)
	    start_forking(envp, commande);
	}
      lu = 0;
    }
}
