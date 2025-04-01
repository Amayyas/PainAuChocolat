/*
** EPITECH PROJECT, 2025
** PainAuChocolat_Tester
** File description:
** Unit tests for add functions
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../my.h"

Test(add_numbers, basic_test)
{
    char *numbers[] = {"1", "2", "3"};
    int result = add_numbers(3, numbers);
    cr_assert_eq(result, 6, "Expected 6 but got %d", result);
}

Test(add_numbers, negative_numbers)
{
    char *numbers[] = {"5", "-3", "2"};
    int result = add_numbers(3, numbers);
    cr_assert_eq(result, 4, "Expected 4 but got %d", result);
}

Test(error_handling, not_enough_args)
{
    char *args[] = {"program", "5"};
    int result = error_handling(2, args);
    cr_assert_eq(result, 84, "Expected error code 84 but got %d", result);
}

Test(error_handling, help_flag)
{
    char *args[] = {"program", "-h"};
    int result = error_handling(2, args);
    cr_assert_eq(result, 0, "Expected 0 but got %d", result);
}

Test(error_handling, sufficient_args)
{
    char *args[] = {"program", "1", "2", "3"};
    int result = error_handling(4, args);
    cr_assert_eq(result, 0, "Expected 0 but got %d", result);
}

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
