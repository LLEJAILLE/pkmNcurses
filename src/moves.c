/*
** EPITECH PROJECT, 2022
** sokoban-double-tableau
** File description:
** moves
*/

#include "../my.h"

void moveright(int key, all_t *all)
{
    if (all->map[all->x][all->y + 1] == '#') {
        return;
    }
    if (all->map[all->x][all->y + 1] == ' ') {
        all->map[all->x][all->y + 1] = 'P';
        all->map[all->x][all->y] = ' ';
    }
    if (all->map[all->x][all->y + 1] == '.') {
        all->map[all->x][all->y] = ' ';
        all->map[all->x][all->y + 1] = 'P';
    }
    movesrightx(key, all);
}

void moveleft(int key, all_t *all)
{
    if (all->map[all->x][all->y - 1] == '#') {
        return;
    }
    if (all->map[all->x][all->y - 1] == ' ') {
        all->map[all->x][all->y - 1] = 'P';
        all->map[all->x][all->y] = ' ';
    }
    if (all->map[all->x][all->y - 1] == '.') {
        all->map[all->x][all->y] = ' ';
        all->map[all->x][all->y - 1] = 'P';
    }
    movesleftx(key, all);
}

void moveup(int key, all_t *all)
{
    if (all->map[all->x - 1][all->y] == '#') {
        return;
    }
    if (all->map[all->x - 1][all->y] == ' ') {
        all->map[all->x - 1][all->y] = 'P';
        all->map[all->x][all->y] = ' ';
    }
    if (all->map[all->x - 1][all->y] == '.') {
        all->map[all->x][all->y] = ' ';
        all->map[all->x - 1][all->y] = 'P';
    }
    movesupx(key, all);
}

void movedown(int key, all_t *all)
{
    if (all->map[all->x + 1][all->y] == '#') {
        return;
    }
    if (all->map[all->x + 1][all->y] == ' ') {
        all->map[all->x + 1][all->y] = 'P';
        all->map[all->x][all->y] = ' ';
    }
    if (all->map[all->x + 1][all->y] == '.') {
        all->map[all->x][all->y] = ' ';
        all->map[all->x + 1][all->y] = 'P';
    }
    movesdownx(key, all);
}
