/*
** EPITECH PROJECT, 2021
** Bttf BSQ
** File description:
** test_my_tablen
*/
#include "my.h"
#include <criterion/criterion.h>


Test(my_tablen, test_i)
{
    int *av[] = {12, 45};
    cr_assert_eq(my_tablen(av), 2);
}