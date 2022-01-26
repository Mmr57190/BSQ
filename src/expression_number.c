/*
** EPITECH PROJECT, 2021
** my_atoi
** File description:
** my_atoi
*/

#include "stock_fnct.h"

int my_signe(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '-')
            count++;
    if (count % 2 != 0)
        return (-1);
    return (1);
}

int new_getnbr(char const *str)
{
    int i = 0;
    int nbr = 0;
    int signe = my_signe(str);

    while (str[i] == '-' || str[i] == '+'
        || str[i] < '0' || str[i] > '9')
        i++;
    for (i; str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'); i++) {
        if (str[i] >= '0' && str[i] <= '9')
            nbr = nbr * 10 + (str[i] - '0');
        else
            return (nbr * signe);
    }
    return (nbr * signe);
}

int my_getnbr(char const *str)
{
    int i = 0;
    long nombre = 0;
    int signe = 1;
    long result = 0;

    for (; str[i] == '-' || str[i] == '+'; i++)
        if (str[i] == '-')
            signe *= -1;
    for (;(str[i] >= '0') && (str[i] <= '9'); i++) {
        nombre = (nombre * 10) + (str[i] - 48);
    }
    result = nombre * signe;
    if (result < 0)
        if (result != -2147483648 || signe == 1)
            return (0);
    if (result > 0)
        if (result > 2147483647 || signe == (-1))
            return (0);
    return (nombre * signe);
}

int my_atoi(char const *transform)
{
    int res = 0;

    for (int i = 0; transform[i] != '\0'; i++)
        if (transform[i] >= '0' && transform[i] <= '9')
        res = res * 10 + transform[i] - '0';
    return (res);
}
