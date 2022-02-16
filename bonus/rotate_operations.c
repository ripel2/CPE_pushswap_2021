/*
** EPITECH PROJECT, 2021
** rotate_operations
** File description:
** Rotate operations (do_ra_operation, do_rb_operation, rdo_ra_operation, rrb)
*/

#include "bonus.h"
#include <stdlib.h>

void do_ra_operation(prg_t *prg)
{
    if (*prg->l_a != NULL) {
        *prg->l_a = (*prg->l_a)->next;
        if (prg->silent == 0)
            my_putstr("ra ");
        if (prg->verbose && prg->silent == 0)
            print_verbose(prg);
        if (prg->count)
            prg->operations++;
    }
}

void do_rb_operation(prg_t *prg)
{
    if (*prg->l_b != NULL) {
        *prg->l_b = (*prg->l_b)->next;
        if (prg->silent == 0)
            my_putstr("rb ");
        if (prg->verbose && prg->silent == 0)
            print_verbose(prg);
        if (prg->count)
            prg->operations++;
    }
}

void do_rra_operation(prg_t *prg)
{
    if (*prg->l_a != NULL) {
        *prg->l_a = (*prg->l_a)->prev;
        if (prg->silent == 0)
            my_putstr("rra ");
        if (prg->verbose && prg->silent == 0)
            print_verbose(prg);
        if (prg->count)
            prg->operations++;
    }
}

void do_rrb_operation(prg_t *prg)
{
    if (*prg->l_b != NULL) {
        *prg->l_b = (*prg->l_b)->prev;
        if (prg->silent == 0)
            my_putstr("rrb ");
        if (prg->verbose && prg->silent == 0)
            print_verbose(prg);
        if (prg->count)
            prg->operations++;
    }
}
