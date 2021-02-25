/*
** EPITECH PROJECT, 2021
** Bttf BSQ
** File description:
** find_my_square
*/
#include "my.h"

int int_compare(int a, int b, int c)
{
    int comp = a;

    if (comp > b)
        comp = b;
    if (comp > c)
        comp = c;

    return comp;
}

int **remp_min(int **tab_int, char *str, coordonates_t *ptr)
{
    size_t i = 0;
    size_t j = 0;

    while (i + 1 != count_lines(str)) {
        if (tab_int[i][j] != 0 && i != 0 && j != 0) {
            tab_int[i][j] = int_compare(tab_int[i][j - 1],
            tab_int[i - 1][j - 1], tab_int[i - 1][j]) + 1;
        }
        if (tab_int[i][j] > ptr->max) {
            ptr->max = tab_int[i][j];
            ptr->current_i = i;
            ptr->current_j = j;
        }
        j++;
        if (tab_int[i][j] == '\n') {
            i++;
            j = 0;
        }
    }
    return tab_int;
}