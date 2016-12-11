/*
** var.h for asm in /home/arsac_r/corewar-asm/sources
** 
** Made by Romain Arsac
** Login   <arsac_r@epitech.net>
** 
** Started on  Sun Mar 17 23:56:26 2013 Romain Arsac
** Last update Wed Mar 27 13:11:23 2013 Romain Arsac
*/

#ifndef VAR_H_
# define VAR_H_

# define ERROR_OPEN_FILE -1
# define REG 1
# define INDIR 2
# define INDEX 2
# define DIR 4

typedef struct		s_var
{
  char			**av;
  int			fd_src;
  int			fd_write;
  char			*name;
  char			*comment;
}			t_var;

#endif /* !VAR_H_ */
