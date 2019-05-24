/*
** EPITECH PROJECT, 2018
** Day03 Task07
** File description:
** my_put_nbr
*/

void my_putcharfd(char c);

void my_put_nbr_unsignedfd(unsigned int nb)
{
    int n = 0;

    if (nb > 9) {
        my_put_nbr_unsignedfd(nb / 10);
    }
    n = nb % 10;
    my_putcharfd(n + '0');
    return;
}
