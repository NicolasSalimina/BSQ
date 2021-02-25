/*
** EPITECH PROJECT, 2021
** B-CPE-110-RUN-1-1-BSQ-nicolas.salimina
** File description:
** error_fd
*/
#include "my.h"

int error_fd(int fd)
{
    if (fd == -1)
        return 84;
    return 0;
}