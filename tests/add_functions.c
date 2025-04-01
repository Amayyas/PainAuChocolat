/*
** EPITECH PROJECT, 2025
** PainAuChocolat_Tester
** File description:
** Functions implementation for tests
*/

#include "../my.h"

void print_usage(char *program_name)
{
    printf("USAGE: %s number1 number2 [number3 ...]\n", program_name);
}

int add_numbers(int count, char **numbers)
{
    int sum = 0;

    for (int i = 0; i < count; i++) {
        sum += atoi(numbers[i]);
    }
    return sum;
}

int error_handling(int argc, char **argv)
{
    if (argc == 2 && strcmp(argv[1], "-h") == 0) {
        print_usage(argv[0]);
        return 0;
    }
    if (argc < 3) {
        printf("Not enough arguments.\n");
        return 84;
    }
    return 0;
}