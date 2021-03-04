/*
** EPITECH PROJECT, 2020
** my_str_to_array
** File description:
** splits string into array of strings
*/

#include "../include/clib.h"

int count_words(char *str)
{
    int word = 0;
    int i = 0;

    while (str[i]) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
            word++;
        i++;
    }
    if (str[i - 1] != '\n')
        word++;
    return (word);
}

int word_len(int i, char *str)
{
    int len = 0;

    while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
        len++;
        i++;
    }
    return (len);
}

char **my_str_to_array(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **array = malloc(sizeof(char *) * count_words(str));

    if (!array)
        return (NULL);
    while (j < count_words(str)) {
        if (array[j] = malloc(sizeof(char) * word_len(i, str) + 1), !array[j])
            return (NULL);
        k = 0;
        while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
            array[j][k++] = str[i++];
        array[j][k] = '\0';
        i++;
        j++;
    }
    return (array);
}