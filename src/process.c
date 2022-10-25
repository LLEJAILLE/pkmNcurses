/*
** EPITECH PROJECT, 2022
** B-CPE-210-NCY-2-1-solostumper02-louis.lejaille
** File description:
** main
*/

#include <ncurses.h>
#include "../my.h"

void print_map(char **map, char **map_o, all_t *all)
{
    for (int i = 0; map[i] != NULL; i++) {
        for (int j = 0; map[i][j] != '\0'; j++) {
            printw("%c", map[i][j]);
        }
        printw("\n");
    }
    // printw("co: x: %d, y: %d", all->map[all->x], all->map[all->y]);
    printw("co: x: %d, y: %d", all->x, all->y);
}

void free_map(all_t *all)
{
    clear();
    print_map(all->map, all->map_o, all);
    refresh();
    usleep(100000);
    endwin();
    for (int i = 0; all->map[i] != NULL; i++) {
        free(all->map[i]);
    }
}

char *init_map(char *arg)
{
    int fd = open(arg, O_RDONLY);
    struct stat sb;
    fstat(fd, &sb);
    if (sb.st_size == 0)
        return (NULL);
    char *buffer = malloc(sizeof(char) * sb.st_size + 1);
    if (fd == -1)
        return (NULL);
    read(fd, buffer, sb.st_size);
    buffer[sb.st_size] = '\0';
    close(fd);
    return (buffer);
}

char *create_map(WINDOW *win, all_t *all, char *arg)
{
    int index = 0;
    char *col_of_map = init_map(arg);
    if (col_of_map == NULL)
        return (NULL);
    all->size_line = count_line(col_of_map) + 1;
    all->size_col = my_strlenne(col_of_map) - 1;
    all->map = malloc(sizeof(char *) * (all->size_line + 1));
    all->map[all->size_line] = NULL;
    for (int i = 0; i != all->size_line; i++) {
        all->map[i] = malloc(sizeof(char) * (all->size_col + 1));
        int j = 0;
        for (j; col_of_map[index] != '\n' && col_of_map[index] != '\0'; j++) {
            all->map[i][j] = col_of_map[index];
            index++;
        }
        index++;
        all->map[i][j] = '\0';
    }
}

int my_sokoban(char *str, all_t *all)
{
    int key = 0;
    initscr();
    int verif = ext_boucle(all, key, str);
    if (verif == 84)
        exit(84);
    while (all->win != 0) {
        clear();
        extend_process(all, key);
        key = getch();
        move_p(all, key);
        if (key == 10)
            break;
    }
    free_map(all);
    return (0);
}
