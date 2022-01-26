/*
** EPITECH PROJECT, 2021
** stock_fnct
** File description:
** stock_fnct
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stddef.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include "my.h"

int main(int ac, char **av);
int my_getnbr(char const *str);
int to_error(char *str, char *buff);
int error_open(char *str);
int error_char(char *buff);
int error_vrt(char *str);
char **double_char(char *str);
int counter(char *buff);
int to_find_size(char *str);
char **malloc_to_double_char(int vertical, int horizontal);
char *to_read(char *str);
int my_atoi(char const *transform);
int display_xx(char *buff);
int temp(char *buff);
int to_find_horizontal(char *buff);
int to_find_vertical(char *buff);
int find_minimum(int **res, int i, int j);
int error_oo(char *str);
int **malloc_to_double_int(int vertical, int horizontal);
int bsq(char *buff);
void my_printf(char *str, ...);
int display(int **res, int vertical, int horizontal, int max);
int start(char *buff);
char **stock_x(int max, char **array, int i, int j);
int verify_size(char *buff);

#endif