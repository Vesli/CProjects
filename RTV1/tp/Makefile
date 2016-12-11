##
## Makefile for Makefile in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp
## 
## Made by jean-charles passepont
## Login   <passep_j@epitech.net>
## 
## Started on  Fri Feb  8 09:12:08 2013 jean-charles passepont
## Last update Fri Feb  8 15:35:31 2013 jean-charles passepont
##

NAME	=	tp

SRC	=	make_full.c \
		tp.c \
		mlx_init.c


OBJ	=	$(SRC:.c=.o)

RM	=	rm -f

LIB	=	-lmlx -lXext -lX11 -lm

all:		$(NAME)

$(NAME):	$(OBJ)
	cc -o $(NAME) $(OBJ) $(LIB)

clean:
		$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all