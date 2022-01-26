/*
** EPITECH PROJECT, 2021
** display
** File description:
** display
*/

#include "stock_fnct.h"

int display_xx(char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            my_printf("%c", 'x');
            count++;
    } else if (str[i] == '\n')
        my_printf("\n");
    }
    return (0);
}

char **stock_x(int max, char **array, int i, int j)
{
    int max1 = max;
    int max2 = max;

    for (int k = i; max1 > 0; k--, max1--) {
        for (int f = j; max2 > 0; f--, max2--) {
            array[k][f] = 'x';
        }
        max2 = max;
    }
    return (array);
}

int display(int **res, int vertical, int horizontal, int max)
{
    char **array = malloc_to_double_char(vertical, horizontal);
    int j;

    for (int i = 0; i  < horizontal; i++) {
        for (j = 0; j < vertical; j++) {
            if (res[i][j] == 0) {
                array[i][j] = 'o';
            } else if (res[i][j] == max && max != 0) {
                array = stock_x(max, array, i, j);
                max = 0;
            } else
            array[i][j] = '.';
        }
        array[i][j] = '\0';
    }
    for (int i = 0; i < horizontal; i++) {
        write(1, array[i], my_strlen(array[i]));
        my_putchar('\n');
    }
    return (0);
}
