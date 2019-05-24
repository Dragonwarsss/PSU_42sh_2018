/*
** EPITECH PROJECT, 2018
** Printf
** File description:
** recoding my_printf
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

void my_putcharfd(int nb)
{
    char c = nb;

    write(dprintf_fd, &c, 1);
}

void my_putstrfd(char *str)
{
    int i = 0;

    for (i = 0; str[i]; i += 1);
    write(dprintf_fd, str, i);
}

void is_ptrfd(char c)
{
    if (c == 'p')
        write(dprintf_fd, "0x", 2);
}

void listfd(va_list arg, function_t *fnc, char *str, int i)
{
    function_t *tmp = fnc;
    int nb;

    while (tmp != NULL) {
        if (str[i] == tmp->c && str[i]) {
            is_ptrfd(str[i]);
            nb = va_arg(arg, int);
            tmp->ptr(nb);
            break;
        }
        if (str[i] == 's') {
            my_putstrfd(va_arg(arg, char *));
            break;
        }
        tmp = tmp->next;
    }

}

void my_dprintf(int fd, char *str, ...)
{
    function_t *fnc = create_llfd(fd);
    int i = 0;
    va_list arg;

    if (!fnc)
        return;
    va_start(arg, str);
    while (str[i]) {
        if (str[i] != '%')
            my_putcharfd(str[i]);
        else if (str[i] == '%' && str[i + 1] == '%') {
            write(fd, "%", 1);
            i += 1;
        }
        else {
            i += 1;
            listfd(arg, fnc, str, i);
        }
        i += 1;
    }
    free_ll(fnc);
}
