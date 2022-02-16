/*
** EPITECH PROJECT, 2021
** verbose
** File description:
** Print both list states
*/

#include "bonus.h"
#include <stdlib.h>

void print_verbose(prg_t *prg)
{
    if (prg->count) {
        my_putstr("(operation ");
        my_putnbr(prg->operations + 1);
        my_putstr(")");
    }
    my_putstr("\nl_a: [");
    if (*prg->l_a != NULL)
        print_list(*prg->l_a, PRINT_LIST_FORWARDS);
    my_putstr("]");
    my_putstr("\nl_b: [");
    if (*prg->l_b != NULL)
        print_list(*prg->l_b, PRINT_LIST_FORWARDS);
    my_putstr("]");
    my_putstr("\n\n");
}
