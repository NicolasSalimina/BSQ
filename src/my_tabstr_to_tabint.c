/*
** EPITECH PROJECT, 2021
** Bttf BSQ
** File description:
** my_tabstr_to_tabint
*/
#include "my.h"

int **tabchar_to_tabint(char *str)
{
    int **tab_int;
    size_t i = 0;
    size_t k = 0;

    k = line_size(str, k);
    tab_int = malloc(sizeof(size_t *) * count_lines(str) - 1);
    tab_int[i] = malloc(sizeof(size_t) * line_size(str, k));

    for (size_t j = 0; i + 1 < count_lines(str);) {
        tab_int[i][j] = (str[k] == '.') ? 1: 0;
        j++;
        k++;
        if (str[k] == '\n') {
            tab_int[i][j] = '\n';
            k++;
            j = 0;
            i++;
            tab_int[i] = malloc(sizeof(size_t) * (line_size(str, k) - 1));
        }
    }
    return tab_int;
}