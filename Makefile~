##
## Makefile for My_printf in /Users/vitiel_s/my_printf
## 
## Made by VITIELLO Sullivan
## Login   <vitiel_s@etna-alternance.net>
## 
## Started on  Thu Apr  7 16:30:41 2016 VITIELLO Sullivan
## Last update Thu Apr  7 16:30:44 2016 VITIELLO Sullivan
##

CC	=	gcc
NAME	=	my_printf.so
OUT	=	my_printf.a
SRC	=	my_printf.c \
		function.c	\
		option_csid.c	\
		option_oxX%.c	\
		option_u.c	\
		option_f.c	\
		option_e.c	\
		option_e2.c

OBJ	=	$(SRC:%.c=%.o)
RM	=	rm -f
CFLAGS	=	-W -Wall -Wextra -Werror -pedantic

all:	my_printf_dynamique my_printf_static

my_printf_static:$(OBJ)
	$(CC) -c $(SRC)
	ar rc $(OUT) $(OBJ)
	ranlib $(OUT)

my_printf_dynamique:$(OBJ)
	$(CC) -c -fPIC $(SRC)
	$(CC) -shared -fPIC $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME) $(OUT) *~

re:	fclean all

.PHONY:	all clean fclean re
