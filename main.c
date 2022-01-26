/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "stock_fnct.h"

int main(int ac, char **av)
{
    char *buff = to_read(av[1]);
    int error = to_error(av[1], buff);
    int tmp = temp(buff);

    if (ac != 2) {
        free(buff);
        return (84);
    }
    if (error == -1) {
        free(buff);
        my_printf("error\n");
        return (84);
    }
    if (tmp == -1) {
        free(buff);
        return (0);
    }
    bsq(buff);
    free(buff);
    return (0);
}
