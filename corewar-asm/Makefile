##
## Makefile for asm in /home/arsac_r/corewar-asm
## 
## Made by Romain Arsac
## Login   <arsac_r@epitech.net>
## 
## Started on  Sun Mar 17 23:55:14 2013 Romain Arsac
## Last update Thu Mar 28 00:49:34 2013 vivien penel
##

NAME		= asm

NAME_LIB	= libmy.a

CC		= gcc

CFLAGS		= -W -Wall -pedantic

CFLAGS		+= -I./includes/ -L. -lmy -g

RM		= rm -f

REP_SRCS	= ./sources/

REP_INCLUDES	=  ./includes/

REP_LIB		= ./lib/

SRCS		= $(REP_SRCS)main.c \
		$(REP_SRCS)open_file.c \
		$(REP_SRCS)dlist.c \
		$(REP_SRCS)read_it.c \
		$(REP_SRCS)op.c \
		$(REP_SRCS)convert.c \
		$(REP_SRCS)convert_op1.c \
		$(REP_SRCS)convert_op2.c \
		$(REP_SRCS)convert_op3.c \
		$(REP_SRCS)check_args_type.c \
		$(REP_SRCS)convert_hexa.c \
		$(REP_SRCS)convert_arg.c \
		$(REP_SRCS)get_prog_size.c \
		$(REP_SRCS)get_octet_codage.c \
		$(REP_SRCS)writting.c \
		$(REP_SRCS)convert_little_endian.c

LIB		= $(REP_LIB)my_putchar.c \
		$(REP_LIB)my_putstr.c \
		$(REP_LIB)my_putstr_error.c \
		$(REP_LIB)my_strlen.c \
		$(REP_LIB)my_strcmp.c \
		$(REP_LIB)xmalloc.c \
		$(REP_LIB)my_str_to_wordtab_carac.c \
		$(REP_LIB)epur_str.c \
		$(REP_LIB)get_next_line.c \
		$(REP_LIB)my_strdup.c \
		$(REP_LIB)my_strcat.c \
		$(REP_LIB)my_strcpy.c \
		$(REP_LIB)my_strncpy.c \
		$(REP_LIB)my_strcpy.c \
		$(REP_LIB)my_strncmp.c \
		$(REP_LIB)my_memset.c \
		$(REP_LIB)my_getnbr.c \
		$(REP_LIB)my_concat.c \
		$(REP_LIB)my_eat_head.c \
		$(REP_LIB)convert_base.c


OBJS_SRCS	= $(SRCS:.c=.o)

OBJS_LIB	= $(LIB:.c=.o)

all:	$(NAME_LIB) $(NAME)

$(NAME_LIB): $(OBJS_LIB)
	@ar rc $(NAME_LIB) $(OBJS_LIB)
	@ranlib $(NAME_LIB)
	@cp $(REP_LIB)my.h $(REP_INCLUDES)
	@echo "Lib compilée"

$(NAME): $(OBJS_SRCS)
	@$(CC) $(OBJS_SRCS) -o $(NAME) $(CFLAGS)
	@echo "Programme compilé"

clean: clean_lib clean_srcs

clean_lib:
	@$(RM) $(OBJS_LIB)

clean_srcs:
	@$(RM) $(OBJS_SRCS)

fclean: fclean_lib fclean_srcs

fclean_lib: clean_lib
	@$(RM) $(NAME_LIB)

fclean_srcs: clean_srcs
	@$(RM) $(NAME)

re: fclean all

.PHONY: all re clean clean_lib clean_srcs fclean fclean_lib fclean_srcs
