/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** print_tab
*/

#include "my.h"

void print_tab(char **tab)
{
    for (int i = 0; tab[i]; i += 1)
        my_puts(tab[i]);
}
