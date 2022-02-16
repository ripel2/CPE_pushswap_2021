##
## EPITECH PROJECT, 2021
## push_swap
## File description:
## Makefile for the push_swap bonus
##

NAME = push_swap_b

MAIN = main_bonus.c

SRC = ../src/my_putchar.c \
	../src/my_putstr.c \
	../src/my_getnbr.c \
	../src/my_putnbr.c \
	../src/linked_list.c \
	../src/linked_list_utils.c \
	../src/swap_operations.c \
	push_operations.c \
	rotate_operations.c \
	sorting_engine.c \
	list_is_sorted.c \
	put_usage.c \
	verbose.c \
	time.c \
	../src/error_handling.c

all: build

build: $(SRC)
	gcc -o $(NAME) $(MAIN) $(SRC) -std=gnu99

clean:
	find . -name "*~" -delete -or -name "#*#" -delete
	find . -name "*.gcda" -delete -or -name "*.gcno" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all build fclean re
