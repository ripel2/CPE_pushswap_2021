/*
** EPITECH PROJECT, 2021
** push_swap
** File description:
** Error handling for the push_swap project
*/

#include <stdlib.h>

int is_digit(char ch)
{
    return (ch >= '0' && ch <= '9' || ch == '-');
}

int is_nb(char *str)
{
    for (int c = 0; str[c] != '\0'; c++) {
        if (!is_digit(str[c]))
            return (0);
    }
    if (str[0] == '-' && str[1] == '\0')
        return (0);
    return (1);
}

char *error_handling(int ac, char **av)
{
    for (int c = 1; c < ac; c++) {
        if (!is_nb(av[c]))
            return (av[c]);
    }
    return (NULL);
}
