/*
** my_getnbr.c for Exo_04_Jour_04 in /home/penel_v//C/Jour04
** 
** Made by vivien penel
** Login   <penel_v@epitech.net>
** 
** Started on  Thu Oct 11 15:17:35 2012 vivien penel
** Last update Wed Mar 27 18:10:12 2013 vivien penel
*/

int	nb_neg_test(char *str, int i)
{
  int	j;
  int	z;
  int	nb_neg;

  j = 0;
  z = i - 1;
  nb_neg = 1;
  if ((str[z] >= 'a' && str[z] <= 'z') || (str[z] >= 'A' && str[z] <= 'Z'))
    {
      nb_neg = 0;
    }
  else
    {
      while (j < i)
	{
	  if (str[j] == '-')
	    {
	      nb_neg = nb_neg * -1;
	    }
	  j = j + 1;
	}
    }
  return (nb_neg);
}

int	my_suite_get(char *str, int size, int *nb)
{
  int	i;
  int	j;
  int	ok;

  i = 0;
  ok = 1;
  while (i < size && ok == 1)
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  ok = 0;
	}
      i = i + 1;
    }
  i = i - 1;
  j = i;
  while (i < size && str[i] >= '0' && str[i] <= '9')
    {
      *nb = *nb * 10 + (str[i] - '0');
      i = i + 1;
    }
  *nb = *nb * nb_neg_test(str, j);
  return (*nb);
}

int	my_getnbr(char *str)
{
  int	i;
  int	size;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  size = i;
  if (size >= 26)
    {
      nb = 0;
    }
  else
    {
      nb = my_suite_get(str, size, &nb);
    }
  return (nb);
}
