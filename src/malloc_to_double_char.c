/*
** EPITECH PROJECT, 2021
** malloc_to_double_int
** File description:
** malloc_to_double_int
*/

#include "stock_fnct.h"

char **malloc_to_double_char(int vertical, int horizontal)
{
    char **res = malloc(sizeof(char *) * (horizontal + 1));

    for (int i = 0; i < horizontal; i++)
        res[i] = malloc(sizeof(char) * (vertical + 1));
    return (res);
}

int **malloc_to_double_int(int vertical, int horizontal)
{
    int **res = malloc(sizeof(int *) * (horizontal + 1));

    for (int i = 0; i < horizontal; i++)
        res[i] = malloc(sizeof(int) * (vertical + 1));
    return (res);
}
