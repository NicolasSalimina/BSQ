/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-nicolas.salimina
** File description:
** tab_init
*/
#include "struct.h"
#include"my.h"

coordonates_t *view_struct(void)
{
    coordonates_t *ptr;
    ptr = malloc(sizeof(coordonates_t));
    ptr->max = 0;
    ptr->current_i = 0;
    ptr->current_j = 0;
    return ptr;
}