/*
** EPITECH PROJECT, 2022
** B-PSU-200-NCY-2-1-mysokoban-louis.lejaille
** File description:
** check_map
*/

#include "../my.h"

void check_o(all_t *all, int i)
{
    for (int j = 0; all->map[i][j] != '\0'; j++) {
        if (all->map[i][j] == '.') {
            all->countO++;
        }
    }
}

void check_p(all_t *all, int i)
{
    for (int j = 0; all->map[i][j] != '\0'; j++) {
        if (all->map[i][j] == 'P') {
            all->countP++;
        }
    }
}

void check_x(all_t *all, int i)
{
    for (int j = 0; all->map[i][j] != '\0'; j++) {
        if (all->map[i][j] == 'X') {
            all->countX++;
        }
    }
}
