/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** some dsc
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int i = 0;
    char n;

    while (str[i]) {
        n = str[i];
        my_putchar(n);
        i++;
    }
}
