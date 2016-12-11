/*
** name_comment.c for name_comment in /home/passep_j//Corewar/corewar-asm/sources
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Mon Mar 25 21:09:52 2013 jean-charles passepont
** Last update Mon Mar 25 21:12:05 2013 jean-charles passepont
*/

void		check_comment(t_var *var, t_dlist *list, char *buff, int i)
{
  int		j;

  j = 0;
  while (buff[i] && buff[i] != '.')
    i++;
  if (buff[i] == '.')
    while (buff[i] && buff[i] != '"')
      i++;
  if (buff[i] == '"')
    {
      i++;
      while (buff[i] && buff[i] != '"')
	{
	  var->comment[j] = buff[i];
	  j++;
	  i++;
	}
    }
  write_header(var, list);
}

void		check_name2(t_var *var, t_dlist *list, char *buff)
{
  int		j;
  int		i;

  i = 0;
  j = 0;
  if (buff[i] == '.')
    while (buff[i] && buff[i] != '"')
      i++;
  if (buff[i] == '"')
    {
      i++;
      while (buff[i] && buff[i] != '"')
	{
	  var->name[j] = buff[i];
	  j++;
	  i++;
	}
    }
  else
    my_putstr(".name unsolved\n");
  check_comment(var, list, buff, i);
}

void		check_name(t_var *var, t_dlist *dlist)
{
  char		buff[4097];
  int		lu;
  int		fd;
  int		i;

  i = 1;
  fd = open(var->av[i], O_RDONLY);
  lu = read(fd, buff, 4096);
  buff[lu] = '\0';
  check_name2(var, dlist, buff);
}
