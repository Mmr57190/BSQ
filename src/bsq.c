/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** bsq
*/

#include "stock_fnct.h"

int start(char *buff)
{
    int x = 0;

    for (x; buff[x] != '\n'; x++);
    x = x + 1;
    return (x);
}

int bsq(char *buff)
{
    int vrtcl = to_find_vertical(buff);
    int hrztl = to_find_horizontal(buff);
    int **res = malloc_to_double_int(vrtcl, hrztl);
    int x = start(buff);
    int max = 0;

    for (int i = 0; i < hrztl; i++, x++) {
        for (int j = 0; j < vrtcl; j++, x++) {
            if (buff[x] == 'o')
                res[i][j] = 0;
            else if (buff[x] == '.') {
                res[i][j] = 1;
                res[i][j] = find_minimum(res, i, j);
            }
            if (max < res[i][j])
                max = res[i][j];
        }
    }
    display(res, vrtcl, hrztl, max);
    return (0);
}

int find_minimum(int **res, int i, int j)
{
    if (i > 0 && j > 0) {
    res[i][j] = res[i][j - 1] + 1;
    if (res[i][j] > res[i - 1][j])
        res[i][j] = res[i - 1][j] + 1;
    if (res[i][j] > res[i - 1][j - 1])
        res[i][j] = res[i - 1][j - 1] + 1;
    }
    return (res[i][j]);
}
