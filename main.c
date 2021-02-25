/*
** EPITECH PROJECT, 2021
** Bttf BSQ
** File description:
** main
*/
#include "my.h"

void free_my(char *buf, char **tab, int **tab_int, coordonates_t *ptr)
{
    free(buf);
    free(ptr);
    free(tab);
    free(tab_int);
}

void my_bsq(char *buf, char **tab,  coordonates_t *ptr)
{
    int **tab_int;
    tab_int = tabchar_to_tabint(buf);
    tab_int = remp_min(tab_int, buf, ptr);
    tab = print_x(tab, ptr);
    print_tab(tab, buf);
    free_my(buf, tab, tab_int, ptr);
}

int main(int ac, char **av)
{
    char *buf;
    char **tab;
    coordonates_t *ptr = view_struct();

    int fd = open(av[1], O_RDONLY);
    struct stat sb;

    if (error_cases(ac, fd) == 84)
        return 84;
    stat(av[1], &sb);
    if (sb.st_size > 35160)
        return 0;
    buf = malloc(sizeof(char) * sb.st_size);
    read(fd, buf, sb.st_size);
    tab = my_str_to_word_array(buf);
    my_bsq(buf, tab, ptr);

    return 0;
}