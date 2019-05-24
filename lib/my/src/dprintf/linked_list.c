/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** linked list
*/

#include <stdlib.h>
#include "my.h"

void free_llfd(function_t *fnc)
{
    function_t *current;
    function_t *tmp = fnc;

    while (fnc) {
        current = fnc;
        fnc = current->next;
        free(current);
    }
}

function_t *push_llfd(function_t *fnc, char c)
{
    function_t *tmp = malloc(sizeof(function_t));

    if (!tmp)
        return (NULL);
    tmp->c = c;
    if (fnc != NULL)
        tmp->next = fnc;
    else
        tmp->next = NULL;
    return (tmp);
}

function_t *create_ll_3fd(function_t *fnc)
{
    fnc = push_llfd(fnc, 'u');
    if (!fnc)
        return (NULL);
    fnc->ptr = &my_put_nbr_unsignedfd;
    return (fnc);
}

function_t *create_ll_2fd(function_t *fnc)
{
    fnc = push_llfd(fnc, 'x');
    if (!fnc)
        return (NULL);
    fnc->ptr = &my_put_nbr_hexafd;
    fnc = push_llfd(fnc, 'X');
    if (!fnc)
        return (NULL);
    fnc->ptr = &my_put_nbr_hexaupfd;
    fnc = push_llfd(fnc, 'b');
    if (!fnc)
        return (NULL);
    fnc->ptr = &my_put_nbr_binaryfd;
    fnc = push_llfd(fnc, 'p');
    if (!fnc)
        return (NULL);
    fnc->ptr = &my_put_ptrfd;
    fnc = create_ll_3fd(fnc);
    return (fnc);
}

function_t *create_llfd(int fd)
{
    function_t *fnc;

    fnc = push_llfd(NULL, 'i');
    if (!fnc)
        return (NULL);
    fnc->ptr = &my_put_nbrfd;
    fnc = push_llfd(fnc, 'd');
    if (!fnc)
        return (NULL);
    fnc->ptr = &my_put_nbrfd;
    fnc = push_llfd(fnc, 'c');
    if (!fnc)
        return (NULL);
    fnc->ptr = &my_putcharfd;
    fnc = push_llfd(fnc, 'o');
    if (!fnc)
        return (NULL);
    fnc->ptr = &my_put_nbr_octalfd;
    fnc = create_ll_2fd(fnc);
    return (fnc);
}
