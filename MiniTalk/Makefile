##
## Makefile for makefile in /home/passep_j//Semestre2_Projets/Secondary_Projects/MiniTalk
## 
## Made by jean-charles passepont
## Login   <passep_j@epitech.net>
## 
## Started on  Fri Feb 22 13:41:27 2013 jean-charles passepont
## Last update Tue Mar 12 00:23:12 2013 jean-charles passepont
##

NAME	=	serv

SRC	=	main.c \

OBJ	=	$(SRC:.c=.o)

RM	=	rm -f

LIB	=	-lmy -L/home/passep_j/save/bordel/library

CC	=	gcc

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:		clean all