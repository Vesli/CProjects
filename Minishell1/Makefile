##
## Makefile for Makefile in /home/passep_j//Projet_Semestre_1/Mini_shell_1/Minishellfinal
## 
## Made by jean-charles passepont
## Login   <passep_j@epitech.net>
## 
## Started on  Sun Dec 30 15:03:47 2012 jean-charles passepont
## Last update Tue Mar  5 11:50:51 2013 jean-charles passepont
##

NAME	=	minishell

SRC	=	fonc.c \
		fonc2.c \
		forks.c \
		my_printf.c \
		my_pipe.c \
		my_put_nbr.c \
		my_str_to_argtab.c \
		my_str_to_wordtab.c \
		my_cd.c \
		path.c \
		main.c

OBJ	=	$(SRC:.c=.o)

RM	=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
	cc -o $(NAME) $(OBJ) -g

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

make re:	all clean