/*
** my_dup_stdout.c for myçdup_stdout in /home/passep_j//Semestre2_Projets/Secondary_Projects/Minishell2/tp_pipe
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Tue Feb 19 13:02:44 2013 jean-charles passepont
** Last update Tue Feb 26 17:02:35 2013 jean-charles passepont
*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int	main(int ac, char **av)
{
  int	oldfd;
  int	newfd;
  int	buff[4096];

  oldfd = open("coucou", O_WRONLY | O_CREAT, 0600);
  dup2(oldfd, 1);
  close(oldfd);
}
