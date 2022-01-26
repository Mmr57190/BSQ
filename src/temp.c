/*
** EPITECH PROJECT, 2021
** temp
** File description:
** temp
*/

#include "stock_fnct.h"

int temp(char *buff)
{
    int count = 0;

    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[i] == 'o')
            count++;
    }
    if (count == 0) {
        display_xx(buff);
        return (-1);
    }
    return (0);
}
