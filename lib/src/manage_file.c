/*
** EPITECH PROJECT, 2020
** manage_file
** File description:
** functions to manage the file
*/

#include "../include/clib.h"

char *open_file(char *name)
{
    int ifp  = open(name, O_RDONLY);
    char *buff;
    size_t nbytes;
    ssize_t bytes_read;
    struct stat st;

    if (ifp == ERROR || stat(name, &st) == ERROR)
        return (NULL);
    buff = malloc(sizeof(char) * st.st_size + 1);
    if (!buff)
        return (NULL);
    nbytes = sizeof(buff);
    bytes_read = read(ifp, buff, st.st_size);
    if (bytes_read == ERROR || close(ifp) == ERROR)
        return (NULL);
    buff[st.st_size] = '\0';
    return (buff);
}