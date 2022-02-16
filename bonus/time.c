/*
** EPITECH PROJECT, 2021
** time
** File description:
** Print program execution time
*/

#include "bonus.h"
#include <stdlib.h>
#include <time.h>

void get_start_time(prg_t *prg)
{
    prg->time_start = clock();
}

void put_end_time(prg_t *prg)
{
    clock_t end = clock();
    double elapsed = (double)(end - prg->time_start) / CLOCKS_PER_SEC * 100000;

    if (prg->silent == 0)
        my_putstr("\n");
    my_putstr("list sorted in ");
    my_putnbr((int)elapsed / 100000);
    my_putstr(".");
    my_putnbr((int)elapsed % 100000);
    my_putstr("s.\n");
}
