/*
** EPITECH PROJECT, 2021
** linked_list_utils
** File description:
** Useful functions for the double circular linked list
*/

#include "../include/push_swap.h"
#include <stdlib.h>

void print_list_forwards(node_t *node)
{
    node_t *temp = node;
    node_t *last;

    for (; temp->next != node; temp = temp->next) {
        my_putnbr(temp->data);
        my_putstr(", ");
    }
    my_putnbr(temp->data);
}

void print_list_backwards(node_t *node)
{
    node_t *temp = node;
    node_t *last;

    last = node->prev;
    temp = last;
    for (; temp->prev != last; temp = temp->prev) {
        my_putnbr(temp->data);
        my_putstr(", ");
    }
    my_putnbr(temp->data);
}

void print_list(node_t *node, int direction)
{
    if (direction == 0) {
        print_list_forwards(node);
    } else if (direction == 1) {
        print_list_backwards(node);
    }
}

int get_list_length(node_t *node)
{
    int len = 0;
    node_t *temp = node;

    if (node == NULL)
        return (0);
    for (; temp->next != node; temp = temp->next)
        len++;
    len++;
    return (len);
}

int list_is_sorted(node_t *node)
{
    int list_length = get_list_length(node);
    node_t *temp = node;

    for (int c = 1; c < list_length; c++) {
        if (temp->data > temp->next->data)
            return (0);
        temp = temp->next;
    }
    return (1);
}
