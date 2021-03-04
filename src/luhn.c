/*
** EPITECH PROJECT, 2021
** luhn_validator
** File description:
** main functions for luhn
*/

#include "luhn.h"

int get_num_value(int i, int num)
{
    if (i % 2 == 0)
        return (num);
    num *= 2;
    if (num > 9)
        num -= 9;
    return (num);
}

void luhn(char *str)
{
    int amount = 0;
    int i = 0;
    int num = 0;

    while (str[i]) {
        num = get_num_value(i + 1, str[i] - '0');
        amount += num;
        i++;
    }
    if (amount % 10 == 0)
        my_putstr("valid\n");
    else
        my_putstr("invalid\n");
}
