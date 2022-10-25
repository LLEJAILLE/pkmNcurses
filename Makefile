##
## EPITECH PROJECT, 2022
## File description:
## Makefile
##


SRC = $(wildcard src/*.c lib/*.c)

OBJ = $(SRC:.c=.o)

NAME = pokemon

CFLAGS = -g

all: $(NAME)

$(NAME): $(OBJ)
	gcc -g -o $(NAME) $(OBJ) -lncurses
	rm -f $(OBJ)
	rm -f *~

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
	rm -f *~

re : fclean all
