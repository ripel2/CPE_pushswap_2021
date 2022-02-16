/*
** EPITECH PROJECT, 2021
** push_swap
** File description:
** Header for the push_swap project
*/

#pragma once

#include <time.h>

enum PRINT_LIST_DIRECTION {
    PRINT_LIST_FORWARDS = 0,
    PRINT_LIST_BACKWARDS = 1,
};

int my_getnbr(char const *);
void my_putchar(char);
void my_putstr(char const *);
void my_putstr_err(char const *);
void my_putnbr(int);

typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
} node_t;

typedef struct program {
    int verbose;
    int count;
    int time_f;
    clock_t time_start;
    int silent;
    int reverse;
    char *err;
    int list_start;
    int operations;
    node_t **l_a;
    node_t **l_b;
} prg_t;

void put_usage(void);
char *error_handling(int ac, char **av);
void print_verbose(prg_t *prg);
void get_start_time(prg_t *prg);
void put_end_time(prg_t *prg);

node_t *create_list_from_values(char **values);
node_t *pop_list_start(node_t **node);
void free_list(node_t **node);

void print_list(node_t *node, int direction);
int list_is_sorted(node_t *node);
int list_is_sorted_bonus(node_t *node, int reverse);
int get_list_length(node_t *node);

void do_sa_operation(node_t *l_a, node_t *l_b);
void do_sb_operation(node_t *l_a, node_t *l_b);
void do_sc_operation(node_t *l_a, node_t *l_b);

void do_pa_operation(prg_t *prg);
void do_pb_operation(prg_t *prg);

void do_ra_operation(prg_t *prg);
void do_rb_operation(prg_t *prg);
void do_rra_operation(prg_t *prg);
void do_rrb_operation(prg_t *prg);

void sort_list(prg_t *prg);
