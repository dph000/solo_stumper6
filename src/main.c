/*
** EPITECH PROJECT, 2021
** luhn
** File description:
** main function
*/

#include "luhn.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (my_str_isnum(av[1]) == 0)
        return (84);
    luhn(av[1]);
    return (0);
}
