/*
** path.c for path in /home/passep_j//Projet_Semestre_1/Mini_shell_1/Minishellfinal
**
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
**
** Started on  Sun Dec 30 14:28:38 2012 jean-charles passepont
** Last update Wed Mar  6 19:02:52 2013 jean-charles passepont
*/

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "struct.h"
#include "proto.h"

int	number_element(char **envp)
{
  int	i;

  i = 0;
  while (envp[i])
    i++;
  return (++i);
}

char	**find_path(char **envp, char *commande)
{
  char	**path;
  int	i;

  i = 0;
  while (my_strncmp(envp[i], "PATH=", 5))
    i++;
  path = my_cut_path(&envp[i][5]);
  return (path);
}

void	free_it(char **tab, t_t *t)
{
  int	i;

  i = 0;
  while (tab[i] && t->path[i])
    {
      free(tab[i]);
      free(t->path[i]);
      i++;
    }
}

char	**cmd(char **envp, char *commande)
{
  t_t	*t;
  char	**path;
  char	**tab;
  int	i;

  t = malloc(sizeof(t_t) * number_element(envp));
  t->path = find_path(envp, commande);
  tab = my_str_to_argtab(commande);
  i = 0;
  while (t->path[i])
    {
      my_strcat(t->path[i], "/");
      my_strcat(t->path[i], tab[0]);
      if (access(t->path[i], F_OK) == 0)
	{
	  tab[0] = my_strdup(t->path[i]);
	  if ((execve(t->path[i], tab, envp)) == -1)
	    write(2, "Erreur d'execve\n", my_strlen("Erreur d'execve\n"));
	}
      i++;
    }
  free(tab);
  free_it(tab, t);
}
