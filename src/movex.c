/*
** EPITECH PROJECT, 2022
** sokoban-double-tableau
** File description:
** movex
*/

#include "../my.h"

void movesrightx(int key, all_t *all)
{
    if (all->map[all->x][all->y + 2] == 'X') {
        return;
    }
    if (all->map[all->x][all->y + 1] == 'X' &&
    all->map[all->x][all->y + 2] == '.') {
        all->map[all->x][all->y + 1] = 'P';
        all->map[all->x][all->y] = ' ';
        all->map[all->x][all->y + 2] = 'X';
    }
    if (all->map[all->x][all->y + 1] == 'X' &&
    all->map[all->x][all->y + 2] != '#') {
        all->map[all->x][all->y + 1] = 'P';
        all->map[all->x][all->y] = ' ';
        all->map[all->x][all->y + 2] = 'X';
    }
}

void movesleftx(int key, all_t *all)
{
    if (all->map[all->x][all->y - 2] == 'X') {
        return;
    }
    if (all->map[all->x][all->y - 1] == 'X' &&
    all->map[all->x][all->y - 2] == '.') {
        all->map[all->x][all->y - 1] = 'P';
        all->map[all->x][all->y] = ' ';
        all->map[all->x][all->y - 2] = 'X';
    }
    if (all->map[all->x][all->y - 1] == 'X' &&
    all->map[all->x][all->y - 2] != '#') {
        all->map[all->x][all->y - 1] = 'P';
        all->map[all->x][all->y] = ' ';
        all->map[all->x][all->y - 2] = 'X';
    }
}

void movesupx(int key, all_t *all)
{
    if (all->map[all->x - 2][all->y] == 'X') {
        return;
    }
    if (all->map[all->x - 1][all->y] == 'X' &&
    all->map[all->x - 2][all->y] == '.') {
        all->map[all->x - 1][all->y] = 'P';
        all->map[all->x][all->y] = ' ';
        all->map[all->x - 2][all->y] = 'X';
    }
    if (all->map[all->x - 1][all->y] == 'X' &&
    all->map[all->x - 2][all->y] != '#') {
        all->map[all->x - 1][all->y] = 'P';
        all->map[all->x][all->y] = ' ';
        all->map[all->x - 2][all->y] = 'X';
    }
}

void movesdownx(int key, all_t *all)
{
    if (all->map[all->x + 2][all->y] == 'X') {
        return;
    }
    if (all->map[all->x + 1][all->y] == 'X' &&
    all->map[all->x + 2][all->y] == '.') {
        all->map[all->x + 1][all->y] = 'P';
        all->map[all->x][all->y] = ' ';
        all->map[all->x + 2][all->y] = 'X';
    }
    if (all->map[all->x + 1][all->y] == 'X' &&
    all->map[all->x + 2][all->y] != '#') {
        all->map[all->x + 1][all->y] = 'P';
        all->map[all->x][all->y] = ' ';
        all->map[all->x + 2][all->y] = 'X';
    }
}
