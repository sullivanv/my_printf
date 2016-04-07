CC	=	gcc
NAME	=	my_printf.so
OUT	=	my_printf.a
SRC	=	main.c	\
		my_printf.c \
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
	$(CC) -c $(SRC)
	$(CC) -shared -fPIC $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME) $(OUT) *~

re:	fclean all

.PHONY:	all clean fclean re