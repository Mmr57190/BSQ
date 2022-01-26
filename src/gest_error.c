/*
** EPITECH PROJECT, 2021
** my_error
** File description:
** my_error
*/

#include "stock_fnct.h"

int error_oo(char *buff)
{
    for (int x = 0; buff[x] != '\0'; x++)
        if (buff[x] == '.')
            return (1);
    return (-1);
}

int error_open(char *str)
{
    int opened = open(str, O_RDONLY);
    if (opened == -1) {
        close(opened);
        return (-1);
    }
    close(opened);
    return (0);
}

int error_char(char *buff)
{
    for (int i = counter(buff); buff[i] != '\0'; i++) {
        if (buff[i] != '.' && buff[i] != 'o' && (buff[i] >= '0'
            && buff[i] <= '9') && buff[i] != '\n')
            return (-1);
    }
    return (0);
}

int verify_size(char *buff)
{
    if (my_getnbr(buff) != to_find_horizontal(buff))
        return (-1);
    return (0);
}

int to_error(char *str, char *buff)
{
    int opened = error_open(str);
    int characters = error_char(buff);
    int only = error_oo(buff);
    int size = verify_size(buff);

    if (opened == -1 || characters == -1 || only == -1)
        return (-1);
    if (size == -1)
        return (-1);
    return (1);
}
