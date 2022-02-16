/*
** EPITECH PROJECT, 2021
** push_swap
** File description:
** Put usage
*/

#include "bonus.h"

void put_usage(void)
{
    my_putstr("sort numbers using an optimized algorithm.\n\n"
    "USAGE: ./push_swap_b [...] [-hvctrs]\n"
    "\t[...]\ta list of numbers to sort.\n"
    "\t-h\tprint this message and quit.\n"
    "\t-v\tprints the lists at each operation.\n"
    "\t-c\tcounts the number of operations and prints it.\n"
    "\t-t\tprints the time needed to execute.\n"
    "\t-r\tsorts in reverse order.\n"
    "\t-s\tprocesses all operations silently. overrides verbose flag\n"
    "\nflags must be put before any numbers\n");
}
