/*
** EPITECH PROJECT, 2021
** Bttf BSQ
** File description:
** my_print_tab
*/
#include "my.h"

void print_tab(char **tab, char *str)
{
    str = str;
    size_t i = 0;
    size_t k = line_size(tab[1], i);

    i++;

    while (i  < count_lines(str)) {
        write(1, tab[i], k);
        i++;
    }
}
