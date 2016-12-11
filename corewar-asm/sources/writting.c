/*
** writting.c for writting in /home/passep_j//Corewar/corewar-asm/sources
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Mon Mar 18 05:40:12 2013 jean-charles passepont
** Last update Sun Mar 31 13:06:36 2013 Romain Arsac
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"
#include "op.h"
#include "var.h"
#include "dlist.h"
#include "get_prog_size.h"
#include "convert_little_endian.h"

void		write_header(t_var *var, t_dlist *dlist)
{
  header_t	header;

  header.magic = convert_little(COREWAR_EXEC_MAGIC);
  my_memset(header.prog_name, '\0', sizeof(header.prog_name));
  my_memset(header.comment, '\0', sizeof(header.comment));
  my_strcpy(header.prog_name, "zork");
  my_strcpy(header.comment, "blablabla");
  header.prog_size = convert_little(get_prog_size(dlist));
  var->fd_write = open("test.cor", O_WRONLY | O_CREAT, S_IRWXU);
  write(var->fd_write, &header, sizeof(struct header_s));
  close(var->fd_write);
}
