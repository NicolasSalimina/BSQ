/*
** EPITECH PROJECT, 2021
** Bttf BSQ
** File description:
** my_tablen
*/
#include "my.h"

int my_tablen(int **tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        i++;
    }
    return i;
}