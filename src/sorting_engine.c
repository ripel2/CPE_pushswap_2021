/*
** EPITECH PROJECT, 2021
** sorting_engine
** File description:
** Functions to handle sorting for the push_swap project
*/

#include "../include/push_swap.h"
#include <stdlib.h>

void sort_positive_nb(node_t **l_a, node_t **l_b, int cbit, int list_len)
{
    int moved = 0;

    for (int c = 0; c <= list_len - 1; c++) {
        if (((*l_a)->data >> cbit) & 1) {
            do_pb_operation(l_a, l_b);
            do_rb_operation(l_a, l_b);
            moved++;
        } else
            do_ra_operation(l_a, l_b);
    }
    if (moved > 0) {
        for (int c = 0; c < moved; c++) {
            do_pa_operation(l_a, l_b);
            do_ra_operation(l_a, l_b);
        }
    }
}

void sort_negative_nb(node_t **l_a, node_t **l_b, int list_len)
{
    int moved = 0;

    for (int c = 0; c <= list_len - 1; c++) {
        if (((*l_a)->data >> 31) & 1) {
            do_pb_operation(l_a, l_b);
            moved++;
        } else
            do_ra_operation(l_a, l_b);
    }
    if (moved > 0)
        for (int c = 0; c < moved; c++)
            do_pa_operation(l_a, l_b);
}

void radix_sort(node_t **l_a, node_t **l_b)
{
    int len = get_list_length(*l_a);
    int current_bit;

    for (current_bit = 0; current_bit < 31; current_bit++) {
        if (list_is_sorted(*l_a))
            break;
        sort_positive_nb(l_a, l_b, current_bit, len);
    }
    sort_negative_nb(l_a, l_b, len);
    my_putstr("sb\n");
}

void sort_list(node_t **l_a, node_t **l_b)
{
    if (list_is_sorted(*l_a)) {
        my_putchar('\n');
        return;
    }
    radix_sort(l_a, l_b);
}
