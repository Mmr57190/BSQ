/*
** EPITECH PROJECT, 2021
** double_char
** File description:
** double_char
*/

#include "stock_fnct.h"

char **double_char(char *str)
{
    int size = to_find_size(str);
    char *buff = malloc(sizeof(char) * (size + 1));
    char **res = malloc_to_double_char(size, size);
    int x = 0;
    int y = 0;

    buff = to_read(str);
    for (int z = start(buff); buff[z] != '\0'; z++, y++) {
        if (buff[z] == '\n') {
            my_printf("\n");
            res[x][y] = '\0';
            x++;
            y = 0;
        }
        res[x][y] = buff[z];
        my_printf("%d\n", res[x][y]);
    }
    res[x][y] = '\0';
    return (res);
}
