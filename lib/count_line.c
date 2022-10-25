/*
** EPITECH PROJECT, 2022
** bttf
** File description:
** count_line
*/

#include "../my.h"

int count_line(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            count++;
        }
    }
    return (count);
}
