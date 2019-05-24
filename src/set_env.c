/*
** EPITECH PROJECT, 2019
** 42sh
** File description:
** set_env
*/

#include <stdlib.h>
#include "sh.h"
#include "my.h"

void copy_user(char **envp)
{
    int i = 0;
    char *str;

    for (i = 0; envp[i]; i += 1)
        if (my_strncomp("USER=", envp[i], 5))
            str = my_strdup(envp[i]);
    user = my_strcpynjump(str, 5);
}

void copy_env(char **envp)
{
    int i = 0;

    if (!envp[0]) {
        env = NULL;
        return;
    }
    for (; envp[i]; i += 1);
    env = malloc(sizeof(char*) * (i + 1));
    env[i] = NULL;
    for (i = 0; envp[i]; i += 1)
        env[i] = my_strdup(envp[i]);
    for (i = 0; env[i]; i += 1)
        my_printf("%s\n", env[i]);
}

void set_env(char **envp)
{
    if (!envp[0]) {
        env = NULL;
        return;
    }
    copy_user(envp);
}
