/*
** EPITECH PROJECT, 2022
** B-PSU-200-NCY-2-1-mysokoban-louis.lejaille
** File description:
** ext
*/

#include "../my.h"

void extend_process(all_t *all, int key)
{
    find_p(all, key);
    compare_array(all);
    print_map(all->map, all->map_o, all);
}

int ext_boucle(all_t *all, int key, char *str)
{
    char *verif_txt2 = create_map(stdscr, all, str);
    char *verif_txt = init_map(str);
    if (verif_txt == NULL || verif_txt2 == NULL) {
        return (84);
    }
    create_array_o(all, str);
    find_p(all, key);
    curs_set(0);
    keypad(stdscr, TRUE);
    return (0);
}
