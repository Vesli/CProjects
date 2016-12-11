/*
** main.c for main in /home/passep_j//Projet_Semestre_1/Mini_shell_1/Minishellfinal
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Sun Dec 30 12:48:42 2012 jean-charles passepont
** Last update Sun Dec 30 16:19:52 2012 jean-charles passepont
*/

#include <signal.h>

void	trait_sig_int()
{
  my_putstr("\nwelcome $>");
}

int	main(int ac, char **av, char **envp)
{
  signal(SIGINT, trait_sig_int);
  aff_prompt(envp);
  return (0);
}
