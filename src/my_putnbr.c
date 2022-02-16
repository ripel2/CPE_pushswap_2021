/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** Prints a given number, any int, to the current stream.
*/

#include "../include/push_swap.h"

void my_putnbr(int nb)
{
    int temp;

    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return;
    }
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb >= 10) {
        temp = nb / 10;
        nb = nb - 10 * temp;
        my_putnbr(temp);
    }
    my_putchar('0' + nb);
}
