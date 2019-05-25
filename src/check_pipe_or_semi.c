/*
** EPITECH PROJECT, 2019
** minishell2
** File description:
** check if there is semi or pipe
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "my.h"
#include "env.h"

static int mult_sep(char **sep)
{
    int count = 0;

    for (int i = 0; sep[i]; i += 1) {
        if (!strcmp(*sep, "|") || !strcmp(*sep, ";") || !strcmp(*sep, ">") ||
            !strcmp(*sep, ">>") || !strcmp(*sep, "<") || !strcmp(*sep, "<<") ||
            !strcmp(*sep, "&&") || !strcmp(*sep, "||"))
            count += 1;
    }
    if (count > 1)
        return (1);
    return (0);
}

int check_pipe_or_semi(char *str)
{
    char **sep = keep_correct_sep(my_str_to_word_array(str));

    if (!sep[0]) {
        return (0);
    }
    if (only_semi(sep) || only_pipe(sep) || mult_sep(sep)) {
        top_kek(str);
        return (1);
    }
    return (0);
}
