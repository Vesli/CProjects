/*
** proto.h for proto in /home/passep_j//.ssh/allum1-2017-passep_j
** 
** Made by jean-charles passepont
** Login   <passep_j@epitech.net>
** 
** Started on  Fri Feb 15 16:29:00 2013 jean-charles passepont
** Last update Fri Feb 15 16:33:46 2013 jean-charles passepont
*/

#ifndef		_PROTO_H_
# define	_PROTO_H_

void		aff_allum_ia(int *);
void		aff_allum_player(int *);
int			allum_0(int *);
int			this(int *);
int			i_a(int *);
int			error3(int *);
int			choose_2(int *, int *);
int			choose_1(int *, int *);
int			player(char *, int *, int *);
void		end(int *);
int			start(char *, int *);
void		rules(char *, int *);
void		init_second(char *, int, int, int *);
void		init();

/******* LIB *******/
void		my_putchar(char);
void    	my_putstr(char *);
int	    	my_strlen(char *);
int	    	my_strncmp(char *, char *, int);
void    	my_put_nbr(int);
void    	my_putnbr_base(int, char *);
void    	my_putnbr_base2(unsigned int, char *);
int       	my_printf(const char *, ...);

#endif		/*_PROTO_H_*/
