/*
** EPITECH PROJECT, 2022
** B-PSU-200-NCY-2-1-mysokoban-louis.lejaille
** File description:
** my_strlenne
*/

#include "../my.h"

int my_strlenne2(char const *str)
{
    int i = 0;
    while (str[i] != '\n') {
        i++;
    }
    return (i);
}

int my_strlenne(char const *str)
{
    int i = 0;
    int j = 0;
    int tmp = 0;

    for (i; str[i] != '\0'; i++, j++) {
        if (str[i] == '\n') {
            if (j > tmp) {
                tmp = j;
            }
            j = 0;
        }
    }
    return (tmp);
}
