CC	=	gcc
NAME	=	test_printf
SRC	=	main.c	\
		my_printf.c \
		function.c	\
		option_csid.c	\
		option_oxX%.c	\
		option_u.c

OBJ	=	$(SRC:%.c=%.o)
RM	=	rm -f
CFRAGS	=	-W -Wall -Wextra -Werror

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:
	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all