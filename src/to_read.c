/*
** EPITECH PROJECT, 2021
** to_read
** File description:
** to_read
*/

#include "stock_fnct.h"

char *to_read(char *str)
{
    int size = to_find_size(str);
    int opened = 0;
    int read_ed;
    char *buff = malloc(sizeof(char) * (size + 1));

    opened = open(str, O_RDONLY);
    read_ed = read(opened, buff, size);
    buff[size] = '\0';
    return (buff);
}
