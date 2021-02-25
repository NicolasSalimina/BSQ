/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-nicolas.salimina
** File description:
** test_myprintf
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, c_flag, .init = redirect_all)
{
    my_printf("hello %c", 'c');
    cr_assert_stdout_eq_str("hello c");
}

Test(my_printf, two_flags, .init = redirect_all)
{
    my_printf("%s%d", "I'm", 18);
    cr_assert_stdout_eq_str("I'm18");
}