/*
** EPITECH PROJECT, 2019
** 42sh
** File description:
** do_repeat.c
*/

#include <stdlib.h>
#include <stdio.h>

void do_repeat(char **arr)
{
    if (!arr[1] || !arr[2]) {
        dprintf(2, "repeat: Too few arguments.\n");
        return;
    }
    for (int i = atoi(arr[1]); i != 0; i -= 1)
        system(arr[2]);
}
