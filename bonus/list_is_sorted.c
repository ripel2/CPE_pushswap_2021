/*
** EPITECH PROJECT, 2021
** linked_list_utils
** File description:
** Useful functions for the double circular linked list
*/

#include "../include/push_swap.h"
#include <stdlib.h>

int list_is_sorted_bonus(node_t *node, int reverse)
{
    int list_length = get_list_length(node);
    node_t *temp = node;

    for (int c = 1; c < list_length; c++) {
        if (reverse == 0 && temp->data > temp->next->data)
            return (0);
        if (reverse == 1 && temp->data < temp->next->data)
            return (0);
        temp = temp->next;
    }
    return (1);
}
