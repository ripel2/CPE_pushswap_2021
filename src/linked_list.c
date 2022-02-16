/*
** EPITECH PROJECT, 2021
** linked_list
** File description:
** Functions for the double circular linked list
*/

#include "../include/push_swap.h"
#include <stdlib.h>

node_t *init_list(int data)
{
    node_t *node = malloc(sizeof(node_t));

    if (node == NULL)
        return (NULL);
    node->data = data;
    node->next = node;
    node->prev = node;
    return (node);
}

void add_values_to_list(node_t **node, char **values)
{
    node_t *nnext;
    node_t *nfirst = *node;
    node_t *nlast;

    for (int c = 0; values[c] != NULL; c++) {
        nnext = malloc(sizeof(node_t));
        nnext->data = my_getnbr(values[c]);
        nnext->next = nfirst;
        (*node)->next = nnext;
        nlast = *node;
        (*node) = (*node)->next;
        (*node)->prev = nlast;
    }
    nlast = *node;
    *node = (*node)->next;
    (*node)->prev = nlast;
}

node_t *create_list_from_values(char **values)
{
    int first_nb = my_getnbr(values[0]);
    node_t *node = init_list(first_nb);

    if (node == NULL)
        return (NULL);
    add_values_to_list(&node, &values[1]);
    return (node);
}

node_t *pop_list_start(node_t **node)
{
    node_t *temp;

    if (*node == NULL)
        return (0);
    if (*node == (*node)->next) {
        temp = (*node);
        (*node) = NULL;
    } else {
        temp = (*node);
        (*node)->prev->next = (*node)->next;
        (*node)->next->prev = (*node)->prev;
        *node = (*node)->next;
    }
    return (temp);
}

void free_list(node_t **node)
{
    node_t *temp = *node;
    int len;

    if (*node == NULL)
        return;
    len = get_list_length(*node);
    for (int c = 0; c < len - 1; c++) {
        free(temp);
        temp = temp->next;
    }
    *node = NULL;
}
