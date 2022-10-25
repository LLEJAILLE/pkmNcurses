/*
** EPITECH PROJECT, 2022
** sokoban-double-tableau
** File description:
** game
*/

#include "../my.h"

void full_ext_loose(all_t *all)
{
    for (all->y = 0; all->map[all->x][all->y] != '\0'; all->y++) {
        if (all->map[all->x][all->y] == 'X' &&
        all->map[all->x - 1][all->y] == '#' &&
        all->map[all->x][all->y - 1] == '#' ||
        all->map[all->x][all->y] == 'X' &&
        all->map[all->x + 1][all->y] == '#' &&
        all->map[all->x][all->y - 1] == '#' ||
        all->map[all->x][all->y] == 'X' &&
        all->map[all->x - 1][all->y] == '#' &&
        all->map[all->x][all->y + 1] == '#' ||
        all->map[all->x][all->y] == 'X' &&
        all->map[all->x + 1][all->y] == '#' &&
        all->map[all->x][all->y + 1] == '#') {
            all->loose++;
        }
    }
}

void find_p(all_t *all, int key)
{
    all->x = 0;
    all->y = 0;
    for (all->x = 0; all->map[all->x] != NULL; all->x++) {
        for (all->y = 0; all->map[all->x][all->y] != '\0'; all->y++) {
            if (all->map[all->x][all->y] == 'P') {
                return;
            }
        }
    }
}

int move_p(all_t *all, int key)
{
    find_p(all, key);
    if (key == KEY_RIGHT) {
        moveright(key, all);
    }
    if (key == KEY_LEFT) {
        moveleft(key, all);
    }
    if (key == KEY_UP) {
        moveup(key, all);
    }
    if (key == KEY_DOWN) {
        movedown(key, all);
    }
    if (key == 32 && (all->map[all->x + 1][all->y] == '@'|| all->map[all->x - 1][all->y] == '@' || all->map[all->x][all->y + 1] == '@' || all->map[all->x][all->y - 1] == '@')) {
        clear();
        int i = 0;
        while(i != 1) {
            clear();
            combat(all);
            sleep(1);
            clear();
            i = 1;
        }
    }


    if (key == 32) {
        clear();
        combat(all);
    }


    // if (key == 32) {
    //     all->comb = 1;
    //     int i = 0;
    //     clear();
    //     while(i != 1) {
    //         clear();
    //         usleep(1000000);
    //         i = 1;
    //         all->comb = 0;
    //     }
    // }

    return (0);
}