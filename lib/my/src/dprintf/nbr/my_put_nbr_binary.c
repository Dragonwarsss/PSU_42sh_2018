/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** put a number
*/

void my_putcharfd(char c);

void my_put_nbr_binaryfd(int nb)
{
    if (nb >= 0 && nb <= 1)
        my_putcharfd(nb + 48);
    else if (nb > 1) {
        my_put_nbr_binaryfd(nb / 2);
        my_put_nbr_binaryfd(nb % 2);
    }
}
