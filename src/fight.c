/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** fight
*/

#include "../my.h"

char *init_map_fight(all_t *all)
{
    int fd = open("map/fight.txt", O_RDONLY);
    struct stat sb;
    fstat(fd, &sb);
    if (sb.st_size == 0) {
        return (NULL);
    }
    char *buffer = malloc(sizeof(char) * sb.st_size + 1);
    if (fd == -1) {
        return (NULL);
    }
    read(fd, buffer, sb.st_size);
    buffer[sb.st_size] = '\0';
    close(fd);
    clear();
    return (buffer);
}

char *create_map_fight(all_t *all)
{
    int index = 0;
    char *col_of_map = init_map_fight(all);
    if (col_of_map == NULL) {
        return (NULL);
    } 
    all->size_line = count_line(col_of_map) + 1;
    all->size_col = my_strlenne(col_of_map) - 1;
    all->fight = malloc(sizeof(char *) * (all->size_line + 1));
    all->fight[all->size_line] = NULL;
    for (int i = 0; i != all->size_line; i++) {
        all->fight[i] = malloc(sizeof(char) * (all->size_col + 1));
        int j = 0;
        for (j; col_of_map[index] != '\n' && col_of_map[index] != '\0'; j++) {
            all->fight[i][j] = col_of_map[index];
            index++;
        }
        index++;
        all->fight[i][j] = '\0';
    }
}

void print_map_fight(char **map, all_t *all)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            printw("%c", map[i][j]);
        }
        printw("\n");
    }
    printw("hello");
    // printw("co: x: %d, y: %d", all->map[all->x], all->map[all->y]);
}

void combat(all_t *all) {
    clear();
    init_map_fight(all);
    create_map_fight(all);
    print_map_fight(all->fight, all);
}