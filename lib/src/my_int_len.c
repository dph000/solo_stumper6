/*
** EPITECH PROJECT, 2021
** my_int_len
** File description:
** returns the length of an int
*/

int my_int_len(int num)
{
    int i = 0;

    while (num > 0) {
        num /= 10;
        i++;
    }
    return (i);
}