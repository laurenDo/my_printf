##
## Makefile for my_printf in /Users/lauren_d/Documents/printf/printf
## 
## Made by LAURENCEAU Dorian
## Login   <lauren_d@etna-alternance.net>
## 
## Started on  Fri Apr  8 13:43:44 2016 LAURENCEAU Dorian
## Last update Fri Apr  8 13:43:46 2016 LAURENCEAU Dorian
##
CC	=	gcc
SRC	=	my_printf.c \
		function.c \
		function2.c \
		search.c 
OBJ	=	$(SRC:%.c=%.o)
RM	= rm -f
CFLAGS += -fPIC -W -Wall -Werror -pedantic -Wextra
LDFLAGS += -shared -o
MY_PRINTF_DYNAMIC = libmy_printf_`uname -m`-`uname -s`.so

all: ${MY_PRINTF_DYNAMIC} my_printf_static

my_printf_static: $(OBJ)
					ar -q libmy_printf_`uname -m`-`uname -s`.a $(OBJ)
					ranlib libmy_printf_`uname -m`-`uname -s`.a
					gcc *.o libmy_printf_`uname -m`-`uname -s`.a -o my_printf

$(MY_PRINTF_DYNAMIC):  $(OBJ)
					$(CC) ${LDFLAGS} $(MY_PRINTF_DYNAMIC) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re