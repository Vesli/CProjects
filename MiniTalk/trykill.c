/*
** main.c for main in /home/passep_j//Semestre2_Projets/Secondary_Projects/MiniTalk
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Feb 22 11:16:34 2013 jean-charles passepont
** Last update Fri Feb 22 12:07:33 2013 jean-charles passepont
*/

#include <unistd.h>
#include <sys/types.h>
#include <signal.h>

int		main(int ac, char **av)
{
  pid_t	pid;

  if ((pid = fork()) > 0)
    if ((kill(pid, SIGKILL)) == -1)
	{
		my_putstr("error on kill");
		return (0);
	}
  return (0);
}

