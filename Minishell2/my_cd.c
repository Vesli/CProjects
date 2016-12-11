/*
** my_cd.c for my_cd in /home/passep_j//.ssh/minishell1-2017-passep_j
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Feb 22 22:00:13 2013 jean-charles passepont
** Last update Tue Mar  5 11:07:49 2013 jean-charles passepont
*/

#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include "proto.h"

char	**my_cd(char *commande)
{
  char	**tab;

  tab = my_str_to_argtab(commande);
  if (tab[1] == 0)
    opendir("/home/passep_j");
  else if ((chdir(tab[1])) == -1)
    my_printf("%s : No such file or directory.\n", tab[1]);
}
