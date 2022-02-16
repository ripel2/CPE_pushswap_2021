##
## EPITECH PROJECT, 2021
## push_swap
## File description:
## Makefile for the push_swap project
##

NAME = push_swap

MAIN = src/main.c

SRC = src/my_putchar.c \
	src/my_putstr.c \
	src/my_getnbr.c \
	src/my_putnbr.c \
	src/linked_list.c \
	src/linked_list_utils.c \
	src/swap_operations.c \
	src/push_operations.c \
	src/rotate_operations.c \
	src/sorting_engine.c \
	src/error_handling.c

TESTS = tests/tests_linked_list.c \
	tests/tests_lib.c \
	tests/tests_swap.c \
	tests/tests_push_op.c \
	tests/tests_rotate_op.c \
	tests/tests_sorting.c \
	tests/tests_error_handling.c

COVERAGE_FLAGS = -fprofile-arcs -ftest-coverage --coverage

all: build

build: $(SRC)
	gcc -o $(NAME) $(MAIN) $(SRC)

clean:
	find . -name "*~" -delete -or -name "#*#" -delete
	find . -name "*.gcda" -delete -or -name "*.gcno" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

make_tests: clean
	gcc -o unit_tests $(TESTS) $(SRC) -lcriterion $(COVERAGE_FLAGS)

tests_run: make_tests
	./unit_tests

.PHONY: all build clean fclean re
