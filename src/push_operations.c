/*
** EPITECH PROJECT, 2021
** push_operations
** File description:
** Push operations (do_pa_operation, pb)
*/

#include "../include/push_swap.h"
#include <stdlib.h>

int push_to_other_list(node_t **node1, node_t **node2)
{
    node_t *node1_first;
    node_t *node2_prev;

    if (*node1 == NULL)
        return (0);
    node1_first = pop_list_start(node1);
    if (*node2 == NULL) {
        *node2 = node1_first;
        (*node2)->next = *node2;
        (*node2)->prev = *node2;
    } else {
        node2_prev = (*node2)->prev;
        (*node2)->prev = node1_first;
        (*node2)->prev->next = *node2;
        (*node2)->prev->prev = node2_prev;
        (*node2)->prev->prev->next = node1_first;
        *node2 = (*node2)->prev;
    }
    return (1);
}

void do_pa_operation(node_t **l_a, node_t **l_b)
{
    if (push_to_other_list(l_b, l_a))
        my_putstr("pa ");
}

void do_pb_operation(node_t **l_a, node_t **l_b)
{
    if (push_to_other_list(l_a, l_b))
        my_putstr("pb ");
}
