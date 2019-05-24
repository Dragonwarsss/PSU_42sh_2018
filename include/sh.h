/*
** EPITECH PROJECT, 2019
** 42sh
** File description:
** header
*/

#include "macro.h"

#ifndef sh_h_
#define sh_h_

char **env;
char *user;

void set_env(char **envp);
void copy_user(char **envp);
void copy_env(char **envp);

#endif
