/*
** EPITECH PROJECT, 2021
** Bttf BSQ
** File description:
** my
*/
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "struct.h"
#ifndef MY_H_
#define MY_H_

size_t count_lines(char *str);
int error_cases(int ac, int fd);
int error_fd(int fd);
int **tabchar_to_tabint(char *str);
int int_compare(int a, int b, int c);
int **remp_min(int **tab_int, char *str, coordonates_t *ptr);
int my_tablen(int **tab);
size_t line_size(char *str, size_t i);
char *int_to_string(int nbr);
char **print_x(char **tab, coordonates_t *ptr);
char **my_str_to_word_array(char *str);

int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nbr);
void print_tab(char **tab, char *str);
int my_printf_main(char const *str, int i, va_list list);
int my_printf(char const *str, ...);
int my_printf_special(char const *str, int i);

#endif /* !MY_H_ */
