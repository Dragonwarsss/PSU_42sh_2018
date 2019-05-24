/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** put a number
*/

#include <unistd.h>

void my_putcharfd(char);

void my_put_ptrfd(int nb)
{
    if (nb < 10)
        my_putcharfd(nb + 48);
    else if (nb < 16)
        my_putcharfd(nb + 87);
    else {
        my_put_ptrfd(nb / 16);
        my_put_ptrfd(nb % 16);
    }
}
