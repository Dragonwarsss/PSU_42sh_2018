/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** put a number
*/

void my_putcharfd(char c);

void my_put_nbr_octalfd(int nb)
{
    if (nb >= 0 && nb <= 7) {
        my_putcharfd(nb + 48);
    }
    if (nb > 7) {
        my_put_nbr_octalfd(nb / 8);
        my_put_nbr_octalfd(nb % 8);
    }
}
