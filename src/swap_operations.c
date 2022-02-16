/*
** EPITECH PROJECT, 2021
** swap_operations
** File description:
** Swap operations (do_sa_operation, do_sb_operation, sc)
*/

#include "../include/push_swap.h"

int swap_first_two_elements(node_t *node)
{
    int temp;

    if (get_list_length(node) >= 2) {
        temp = node->next->data;
        node->next->data = node->data;
        node->data = temp;
        return (1);
    }
    return (0);
}

void do_sa_operation(node_t *l_a, node_t *l_b)
{
    if (swap_first_two_elements(l_a))
        my_putstr("sa ");
}

void do_sb_operation(node_t *l_a, node_t *l_b)
{
    if (swap_first_two_elements(l_b))
        my_putstr("sb ");
}

void do_sc_operation(node_t *l_a, node_t *l_b)
{
    do_sa_operation(l_a, l_b);
    do_sb_operation(l_a, l_b);
}
