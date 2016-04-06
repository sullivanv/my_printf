CC	=	gcc
NAME	=	test_printf
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

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all:
	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all