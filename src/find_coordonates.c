/*
** EPITECH PROJECT, 2021
** Bttf BSQ
** File description:
** find_coordonates
*/
#include "my.h"

char **print_x(char **tab, coordonates_t *ptr)
{
    int i = ptr->current_i + 1;
    int j = ptr->current_j;
    int count = 0;
    int lim = 0;

    while (count <= (ptr->max * ptr->max)) {
        if (lim == ptr->max) {
            i--;
            j = ptr->current_j;
            lim = 0;
        }
        if (count != ptr->max * ptr->max)
            tab[i][j] = 'x';
        j--;
        lim++;
        count++;
    }
    return tab;
}