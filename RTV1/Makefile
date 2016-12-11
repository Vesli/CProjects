##
## Makefile for Makefile in /home/passep_j//Semestre2_Projets/Secondary_Projects/RTV1/tp/retry/onestbon
## 
## Made by jean-charles passepont
## Login   <passep_j@epitech.net>
## 
## Started on  Sun Feb 24 15:37:36 2013 jean-charles passepont
## Last update Sun Mar 10 17:31:15 2013 jean-charles passepont
##

NAME	=	rtv1

SRC	=	objects.c \
		calc_init.c \
		draw_objects.c \
		key.c \
		mlx_putpxl_to_img.c \
		init_mlx.c \
		main.c


OBJ	=	$(SRC:.c=.o)

RM	=	rm -f

LIB	=	-lmy -L/home/passep_j/save/bordel/library -lmlx -lXext -lX11 -lm

all:		$(NAME)

$(NAME):	$(OBJ)
	cc -o $(NAME) $(OBJ) $(LIB) -g

clean:
		$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all