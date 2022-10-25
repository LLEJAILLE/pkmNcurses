/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
    #include "stdarg.h"
    #include <unistd.h>
    #include <stdio.h>
    #include <time.h>
    #include <stddef.h>
    #include <string.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <sys/mman.h>
    #include <ncurses.h>

struct all {
    int countO;
    int win;
    int Otmp;
    int countP;
    int countX;
    int countlose;
    int losetmp;
    int vallose;
    int check;
    char **map;
    char **map_o;

    char **fight;
    int comb;

    int x;
    int y;
    int size_line;
    int size_col;
    int tmp_loose;
    int loose;
    int nb_o_1;
    int nb_o_2;
    int winn;
};
typedef struct all all_t;

void my_printf(char *s, ...);
void my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char const *str);
char **my_str_to_word_array(char *str);
int my_put_nbr(int nb);
int my_sokoban(char *str, all_t *all);
int my_decitohexamaj(int decimal);
int my_decitohexamin(int decimal);
void my_dtoo(int decimal);
int my_put_nbr(int nb);
int my_strlenne(char const *str);
int checkwin(char *str, all_t *all);
char *init(char *str, all_t *all);
char *printmap(WINDOW *win, char *arg);
void boucle(int check, char *str, char *buffer, int key);
void checksize(WINDOW *win, char *buffer, all_t *all);
int losecondi(char *str, all_t *all);
int loseret(char *buf, all_t *all);
int count_line(char *str);
void show_word_array(char **arg);
int check_map(all_t *all);
void print_map(char **map, char **map_o, all_t *all);
void invalid_map(all_t *all, int check);
int move_p(all_t *all, int key);
void moveright(int key, all_t *all);
void moveleft(int key, all_t *all);
void moveup(int key, all_t *all);
void movedown(int key, all_t *all);
void find_p(all_t *all, int key);
void movesrightx(int key, all_t *all);
void movesleftx(int key, all_t *all);
void movesupx(int key, all_t *all);
void movesdownx(int key, all_t *all);
void check_win(all_t *all);
int ext_boucle(all_t *all, int key, char *str);
char *create_map(WINDOW *win, all_t *all, char *arg);
void check_o(all_t *all, int i);
void check_p(all_t *all, int i);
void check_x(all_t *all, int i);
void check_loose(all_t *all);
void free_map(all_t *all);
void create_array_o(all_t *all, char *arg);
char *init_map(char *arg);
void replay(all_t *all, char *str, int key);
void compare_array(all_t *all);
void win_condi(all_t *all);
void extend_process(all_t *all, int key);
char *init_map_fight(all_t *all);
char *create_map_fight(all_t *all);
void combat(all_t *all);

#endif /* MY_H_ */
