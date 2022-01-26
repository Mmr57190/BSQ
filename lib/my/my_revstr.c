/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int n = my_strlen(str) - 1;
    char temp;

    while (i <= n) {
        temp = str[i];
        str[i] = str[n];
        str[n] = temp;
        i++;
        n--;
    }
    return (str);
}
