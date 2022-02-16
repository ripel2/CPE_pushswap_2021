/*
** EPITECH PROJECT, 2021
** push_swap
** File description:
** Header for the push_swap project
*/

#pragma once

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

char *error_handling(int ac, char **av);

node_t *create_list_from_values(char **values);
node_t *pop_list_start(node_t **node);
void free_list(node_t **node);

void print_list(node_t *node, int direction);
int list_is_sorted(node_t *node);
int get_list_length(node_t *node);

void do_sa_operation(node_t *l_a, node_t *l_b);
void do_sb_operation(node_t *l_a, node_t *l_b);
void do_sc_operation(node_t *l_a, node_t *l_b);

void do_pa_operation(node_t **l_a, node_t **l_b);
void do_pb_operation(node_t **l_a, node_t **l_b);

void do_ra_operation(node_t **l_a, node_t **l_b);
void do_rb_operation(node_t **l_a, node_t **l_b);
void do_rra_operation(node_t **l_a, node_t **l_b);
void do_rrb_operation(node_t **l_a, node_t **l_b);

void sort_list(node_t **l_a, node_t **l_b);
