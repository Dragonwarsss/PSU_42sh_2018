/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_strncpy
*/

char *my_strncpy(char *str, char *tmp, int n)
{
    for (int i = 0; i != n; i += 1) {
        str[i] = tmp[i];
    }
    str[i] = 0;
    return (str);
}
