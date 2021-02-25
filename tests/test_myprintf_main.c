/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-nicolas.salimina
** File description:
** test_myprintf_main
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_nbr, flags_s, .init = redirect)
{
    my_printf("Hello %d", -16);
    cr_assert_stdout_eq_str("Hello -16");
}

Test(my_printf_special, double_modulo, .init = redirect)
{
    my_printf("Hello %%i");
    cr_assert_stdout_eq_str("Hello %i");
}

Test(my_printf_main, flag_i, .init = redirect)
{
    my_printf("Hello %i", 5);
    cr_assert_stdout_eq_str("Hello 5");
}

Test(my_printf_main, flag_u, .init = redirect)
{
    my_printf("Hello %u", 1);
    cr_assert_stdout_eq_str("Hello 1");
}