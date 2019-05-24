/*
** EPITECH PROJECT, 2018
** Day03 Task07
** File description:
** my_put_nbr
*/

#include <unistd.h>
#include <my.h>

void my_put_nbrfd(int nb)
{
    int n = 0;

    if (nb < 0) {
        my_putcharfd('-');
        nb = -nb;
    }

    if (nb > 9) {
        my_put_nbrfd(nb / 10);
    }
    n = nb % 10;
    my_putcharfd(n + '0');
    return;
}
