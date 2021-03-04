##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	luhn_validator

BIN		=	luhn_validator

DIR 	=	src/

SRC	=	$(wildcard $(DIR)*.c)

OBJ	=	$(SRC:.c=.o)

CFLAGS 	=	-I./include -L./lib -l$(NAME) -lm

all:	$(NAME)

$(NAME):	$(OBJ)
			make re -C lib/
			make comp

comp:
	gcc -o $(BIN) $(SRC) $(CFLAGS)

cleante:
	rm *.gc* unit_tests

clean:
	make fclean -C lib
	rm -rf $(OBJ) $(BIN)

fclean: clean
	rm -rf $(OBJ)

re:	fclean all
