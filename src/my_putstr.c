/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** Displays one-by-one the characters of a string by
** giving the function the address of the string
** first character.
*/

#include "../include/push_swap.h"
#include <unistd.h>

void my_putstr(char const *str)
{
    int len = 0;

    while (str[len] != '\0')
        len++;
    write(1, str, len);
}

void my_putstr_err(char const *str)
{
    int len = 0;

    while (str[len] != '\0')
        len++;
    write(2, str, len);
}
