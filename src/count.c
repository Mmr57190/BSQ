/*
** EPITECH PROJECT, 2021
** counter
** File description:
** counter
*/

#include "stock_fnct.h"

int counter(char *buff)
{
    int value = 0;
    int count = 2;

    value = my_atoi(buff);
    while (value >= 10) {
        value /= 10;
        count++;
    }
    return (count);
}
