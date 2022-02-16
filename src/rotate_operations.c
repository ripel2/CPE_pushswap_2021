/*
** EPITECH PROJECT, 2021
** rotate_operations
** File description:
** Rotate operations (do_ra_operation, do_rb_operation, rdo_ra_operation, rrb)
*/

#include "../include/push_swap.h"
#include <stdlib.h>

void do_ra_operation(node_t **l_a, node_t **l_b)
{
    if (*l_a != NULL) {
        my_putstr("ra ");
        *l_a = (*l_a)->next;
    }
}

void do_rb_operation(node_t **l_a, node_t **l_b)
{
    if (*l_b != NULL) {
        my_putstr("rb ");
        *l_b = (*l_b)->next;
    }
}

void do_rra_operation(node_t **l_a, node_t **l_b)
{
    if (*l_a != NULL) {
        my_putstr("rra ");
        *l_a = (*l_a)->prev;
    }
}

void do_rrb_operation(node_t **l_a, node_t **l_b)
{
    if (*l_b != NULL) {
        my_putstr("rrb ");
        *l_b = (*l_b)->prev;
    }
}
