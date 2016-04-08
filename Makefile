CC	=	gcc
NAME	=	my_printf
SRC	=	my_printf.c \
		function.c \
		function2.c \
		search.c 
OBJ	=	$(SRC:%.c=%.o)
RM	= rm -f
CFLAGS += -W -Wall -Werror -pedantic -Wextra

$(NAME): my_printf_static my_printf_dynamic

my_printf_static: $(OBJ)
					ar -q libmy_printf_`uname -m`-`uname -s`.a $(OBJ)

my_printf_dynamic: gcc -c -fPIC my_printf -o $(SRC)
					gcc -shared -fPIC $(SRC) -o libmy_printf_`uname -m`-`uname -s`.so

all: my_printf_dynamic my_printf_static

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re