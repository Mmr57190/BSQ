/*
** EPITECH PROJECT, 2021
** to_find_size
** File description:
** to_find_size
*/

#include "stock_fnct.h"

int to_find_size(char *str)
{
    struct stat *buff;
    int size = 0;

    buff = malloc(sizeof(struct stat));
    stat(str, buff);
    size = buff->st_size;
    free(buff);
    return (size);
}

int to_find_vertical(char *buff)
{
    int count = 0;
    int i = 0;

    while (buff[i] != '\n' && buff[i] != '\0')
        i++;
    i++;
    for (; buff[i] != '\n'; i++) 
        count++;
    return (count);
}

int to_find_horizontal(char *buff)
{
    int count = my_getnbr(buff);

    return (count);
}
