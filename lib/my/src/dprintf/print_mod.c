/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** print modulo
*/

#include <unistd.h>
#include "my.h"

void print_modfd(int nb)
{
    char c = nb;

    c = '%';
    write(dprintf_fd, &c, 1);
}
