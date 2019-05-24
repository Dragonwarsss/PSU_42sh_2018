/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** concat_path
*/

#include "my.h"

char *concat_path(char *info_path, char *s1, char *s2)
{
    info_path = my_strcpy(info_path, s1);
    if (info_path[my_strlen(s1) - 1] != '/')
        info_path = my_strcat(info_path, "/");
    info_path = my_strcat(info_path, s2);
    return (info_path);
}
