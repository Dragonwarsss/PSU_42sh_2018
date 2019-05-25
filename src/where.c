/*
** EPITECH PROJECT, 2019
** 42sh
** File description:
** where.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "env.h"

void where(char **arr)
{
    char *info_path = malloc(sizeof(char) * 4096);

    if (!arr[1]) {
        dprintf(2, "where: Too few arguments.\n");
        return;
    }
    for (int i = 1; arr[i]; i += 1)
        for (int j = 0; paths[j]; j += 1) {
            if (access((info_path = concat_path(info_path, paths[j],
                arr[i])), X_OK) == 0)
                printf("%s\n", info_path);
        }
}
