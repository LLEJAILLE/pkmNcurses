/*
** EPITECH PROJECT, 2022
** B-PSU-200-NCY-2-1-mysokoban-louis.lejaille
** File description:
** main
*/

#include "../my.h"

void my_dash(void)
{
    printf("USAGE\n\t./my_sokoban map\n");
    printf("DESCRIPTION\n\tMap file representing the warehouse map, ");
    printf("containing '#' for walls, \n\t    'P' for the player, 'X',");
    printf("for the boxes ");
    printf("and '0' for storage locations.\n");
}

int main(int argc, char **argv, all_t *all, char *str)
{
    if (argc != 2)
        return (84);
    if (argv[1][0] != '-' || argv[1][1] != 'h') {
        my_sokoban(argv[1], all);
    } else {
        my_dash();
    }
    if (all->vallose == 1) {
        return (1);
    } else {
        return (0);
    }
}
