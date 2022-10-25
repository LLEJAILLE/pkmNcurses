/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** particular
*/

#include "../my.h"

int my_decitohexamaj(int decimal)
{
    char hexa[100];
    int i = 0;
    while (decimal != 0) {
        int tmp = 0;
        tmp = decimal % 16;
        if (tmp < 10) {
            hexa[i] = tmp + 48;
            i++;
        } else {
            hexa[i] = tmp + 55;
            i++;
        }
        decimal = decimal / 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(hexa[j]);
    }
}

int my_decitohexamin(int decimal)
{
    char hexa[100];
    int i = 0;
    while (decimal != 0) {
        int tmp = 0;
        tmp = decimal % 16;
        if (tmp < 10) {
            hexa[i] = tmp + 48;
            i++;
        } else {
            hexa[i] = tmp + 87;
            i++;
        }
        decimal = decimal / 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(hexa[j]);
    }
}

void my_dtoo(int decimal)
{
    int octal = 0;
    int countvalue = 1;
    while (decimal != 0) {
        int remainder = decimal % 8;
        octal += remainder * countvalue;
        countvalue = countvalue * 10;
        decimal = decimal / 8;
    }
    my_put_nbr(octal);
}
