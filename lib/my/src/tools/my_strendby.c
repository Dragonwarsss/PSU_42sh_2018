/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_strendby
*/

#include "my.h"

int my_strendby(char *s1, char *s2)
{
    int l1 = my_strlen(s1);
    int l2 = my_strlen(s2);
    int i = l1 - 1;
    int j = l2 - 1;

    if (l2 > l1)
        return (0);
    if (l1 == l2)
        return (my_strcomp(s1, s2));
    for (i = l1 - 1; j != 0; j -= 1) {
        if (s1[i] != s2[j])
            return (0);
        i -= 1;
    }
    return (1);
}
