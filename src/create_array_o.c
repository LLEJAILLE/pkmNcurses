/*
** EPITECH PROJECT, 2022
** B-PSU-200-NCY-2-1-mysokoban-louis.lejaille
** File description:
** create_array_o
*/

#include "../my.h"

void compare_array4(all_t *all, int i)
{
    for (int j = 0; all->map_o[i][j] != '\0'; j++) {
        if (all->map_o[i][j] == '.' && all->map[i][j] == ' ') {
            all->map[i][j] = '.';
        }
    }
}

void compare_array3(all_t *all, int i)
{
    for (int j = 0; all->map_o[i][j] != '\0'; j++) {
        if (all->map_o[i][j] == '.') {
            all->nb_o_2 += 1;
        }
    }
}

void compare_array2(all_t *all, int i)
{
    for (int j = 0; all->map[i][j] != '\0'; j++) {
        if (all->map[i][j] == '.') {
            all->nb_o_1 += 1;
        }
    }
}

void compare_array(all_t *all)
{
    all->nb_o_1 = 0;
    all->nb_o_2 = 0;
    for (int i = 0; all->map[i] != NULL; i++) {
        compare_array2(all, i);
    }
    for (int i = 0; all->map_o[i] != NULL; i++) {
        compare_array3(all, i);
    }
    if (all->nb_o_1 < all->nb_o_2) {
        for (int i = 0; all->map_o[i] != NULL; i++) {
            compare_array4(all, i);
        }
    }
}

void create_array_o(all_t *all, char *arg)
{
    int index = 0;
    char *col_of_map = init_map(arg);
    all->size_line = count_line(col_of_map) + 1;
    all->size_col = my_strlenne(col_of_map) - 1;
    all->map_o = malloc(sizeof(char *) * (all->size_line + 1));
    all->map_o[all->size_line] = NULL;
    for (int i = 0; i != all->size_line; i++) {
        all->map_o[i] = malloc(sizeof(char) * (all->size_col + 1));
        int j = 0;
        for (j; col_of_map[index] != '\n' && col_of_map[index] != '\0'; j++) {
            if (col_of_map[index] == '.') {
                all->map_o[i][j] = col_of_map[index];
            } else {
                all->map_o[i][j] = ' ';
            }
            index++;
        }
        index++;
        all->map[i][j] = '\0';
    }
}
