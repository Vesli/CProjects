##
## Makefile for Makefile in /home/passep_j//.ssh/allum1-2017-passep_j
## 
## Made by jean-charles passepont
## Login   <passep_j@epitech.net>
## 
## Started on  Fri Feb 15 15:54:57 2013 jean-charles passepont
## Last update Fri Feb 15 16:08:52 2013 jean-charles passepont
##

NAME	=	allum1

SRC	=	aff_allum.c \
		cmd.c \
		lazzy.c \
		ordi.c \
		fonc.c \
		my_printf.c \
		my_putnbr_base.c \
		main.c

OBJ	=	$(SRC:.c=.o)

RM	=	rm

all:		$(NAME)

$(NAME):	$(OBJ)
	cc -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	clean all