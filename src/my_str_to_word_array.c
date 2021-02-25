/*
** EPITECH PROJECT, 2021
** Bttf BSQ
** File description:
** my_str_to_word_array
*/
#include "my.h"

size_t count_lines(char *str)
{
    size_t count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            count++;
    }
    return count;
}

size_t line_size(char *str, size_t i)
{
    size_t count = 1;

    while (str[i] != '\n') {
        i++;
        count++;
    }
    return count;
}

char **my_str_to_word_array(char *str)
{
    char **dest = malloc(sizeof(char *) * count_lines(str));
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;

    dest[i] = malloc(sizeof(char) * line_size(str, i));

    while (i < count_lines(str)) {
        dest[i][j] = str[k];
        k++;
        j++;
        if (str[k] == '\n') {
            dest[i][j] = '\n';
            i++;
            j = 0;
            k++;
            dest[i] = malloc(sizeof(char) * (line_size(str, k) - 1));
        }
    }
    return dest;
}