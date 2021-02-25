/*
** EPITECH PROJECT, 2021
** B-CPE-110-RUN-1-1-BSQ-nicolas.salimina
** File description:
** error_cases
*/
#include "my.h"

int error_cases(int ac, int fd)
{
    if (error_fd(fd) == 84)
        return 84;
    if (ac == 1)
        return 84;
    return 0;
}