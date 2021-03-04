##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	luhn_validator

BIN	=	luhn_validator

DIR 	=	src/

SRC	=	$(wildcard $(DIR)*.c)

OBJ	=	$(SRC:.c=.o)

CFLAGS 	=	-I./include

all:	$(NAME)

$(NAME):	$(OBJ)
		make comp

comp:
	gcc -o $(BIN) $(SRC) $(CFLAGS)

cleante:
	rm *.gc* unit_tests

clean:
	rm -rf $(OBJ) $(BIN)

fclean: clean
	rm -rf $(OBJ)

re:	fclean all
