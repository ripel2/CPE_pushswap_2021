/*
** EPITECH PROJECT, 2021
** sorting_engine
** File description:
** Functions to handle sorting for the push_swap project
*/

#include "bonus.h"
#include <stdlib.h>

void sort_positive_nb(prg_t *prg, int cbit, int list_len)
{
    int moved = 0;

    for (int c = 0; c <= list_len - 1; c++) {
        if (((*prg->l_a)->data >> cbit) & 1) {
            do_pb_operation(prg);
            do_rb_operation(prg);
            moved++;
        } else
            do_ra_operation(prg);
    }
    if (moved > 0) {
        for (int c = 0; c < moved; c++) {
            do_pa_operation(prg);
            do_ra_operation(prg);
        }
    }
}

void sort_negative_nb(prg_t *prg, int list_len)
{
    int moved = 0;

    for (int c = 0; c <= list_len - 1; c++) {
        if (((*prg->l_a)->data >> 31) & 1) {
            do_pb_operation(prg);
            moved++;
        } else
            do_ra_operation(prg);
    }
    if (moved > 0)
        for (int c = 0; c < moved; c++)
            do_pa_operation(prg);
}

void reverse_list(prg_t *prg, int len)
{
    for (int c = 0; c < len; c++) {
        do_pb_operation(prg);
        do_rb_operation(prg);
    }
    for (int c = 0; c < len; c++) {
        do_pa_operation(prg);
    }
}

void radix_sort(prg_t *prg)
{
    int len = get_list_length(*prg->l_a);
    int current_bit;

    for (current_bit = 0; current_bit < 31; current_bit++) {
        if (list_is_sorted(*prg->l_a))
            break;
        sort_positive_nb(prg, current_bit, len);
    }
    sort_negative_nb(prg, len);
    if (prg->reverse)
        reverse_list(prg, len);
    if (prg->silent != 1)
        my_putstr("sb");
    if (prg->silent != 1 && prg->verbose == 1)
        print_verbose(prg);
    else if (prg->time_f != 1)
        my_putstr("\n");
    prg->operations++;
}

void sort_list(prg_t *prg)
{
    if (list_is_sorted_bonus(*prg->l_a, prg->reverse)) {
        my_putchar('\n');
        return;
    }
    radix_sort(prg);
}
