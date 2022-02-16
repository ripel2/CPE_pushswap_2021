/*
** EPITECH PROJECT, 2021
** push_swap
** File description:
** Main entry point for the pushswap project
*/

#include "../include/push_swap.h"
#include <stdlib.h>

void quit_error(char *str)
{
    my_putstr_err("./push_swap: bad number '");
    my_putstr_err(str);
    my_putstr_err("'\n");
}

void put_usage(void)
{
    my_putstr("sort numbers using an optimized algorithm.\n\n"
    "USAGE:\t./push_swap [...]\n"
    "\t[...]\ta list of numbers to sort.\n"
    "\t-h\tprint this message and quit.\n");
}

int main(int ac, char **av)
{
    node_t *l_a;
    node_t *l_b;
    char *err = error_handling(ac, av);

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        put_usage();
        return (0);
    }
    if (err != NULL) {
        quit_error(err);
        return (84);
    }
    if (ac <= 2) {
        my_putchar('\n');
        return (0);
    }
    l_a = create_list_from_values(&av[1]);
    l_b = NULL;
    sort_list(&l_a, &l_b);
    return (0);
}
