/*
** EPITECH PROJECT, 2021
** push_swap
** File description:
** Main entry point for the pushswap project
*/

#include <stdlib.h>
#include "bonus.h"

void quit_error(char *str)
{
    my_putstr_err("./push_swap: bad number '");
    my_putstr_err(str);
    my_putstr_err("'\n");
}

int check_arg(char *arg, prg_t *prg)
{
    char *flag = "vctsr";
    int *flag_int[] = {&prg->verbose, &prg->count, &prg->time_f,\
    &prg->silent, &prg->reverse};
    if (arg[0] == '-' && arg[1] == 'h' && arg[2] == '\0') {
        put_usage();
        return (1);
    }
    for (int c = 0; c < 5 && arg[0] == '-' && arg[2] == '\0'; c++) {
        if (flag[c] == arg[1]) {
            *(flag_int[c]) = 1;
            prg->list_start++;
        }
    }
    return (0);
}

prg_t *init_push_swap(int ac, char **av)
{
    prg_t *prg = malloc(sizeof(prg_t));

    prg->list_start = 1;
    prg->count = 0;
    prg->verbose = 0;
    prg->silent = 0;
    prg->time_f = 0;
    prg->operations = 0;
    prg->reverse = 0;
    for (int c = 1; c < ac; c++) {
        if (check_arg(av[c], prg))
            return (NULL);
    }
    prg->err = error_handling(ac - prg->list_start, &av[prg->list_start]);
    get_start_time(prg);
    return (prg);
}

int push_swap(int ac, char **av, prg_t *prg)
{
    node_t *l_a;
    node_t *l_b;

    l_a = create_list_from_values(&av[prg->list_start]);
    l_b = NULL;
    prg->l_a = &l_a;
    prg->l_b = &l_b;
    sort_list(prg);
    if (prg->verbose && prg->time_f == 0)
        my_putstr("list sorted.\n");
    if (prg->time_f)
        put_end_time(prg);
    if (prg->count) {
        my_putstr("did ");
        my_putnbr(prg->operations);
        my_putstr(" operations.\n");
    }
    free(prg);
}

int main(int ac, char **av)
{
    prg_t *prg = init_push_swap(ac, av);

    if (prg == NULL)
        return (0);
    if (prg->err != NULL) {
        quit_error(prg->err);
        return (84);
    }
    if (ac <= 2) {
        my_putchar('\n');
        return (0);
    }
    push_swap(ac, av, prg);
    return (0);
}
