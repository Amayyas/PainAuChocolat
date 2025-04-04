/*
** EPITECH PROJECT, 2025
** PainAuChocolat_Tester
** File description:
** main
*/

#include "my.h"

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

int main(int argc, char **argv)
{
    int sum = add_numbers(argc - 1, &argv[1]);
    int err = error_handling(argc, argv);

    if (err != 0) {
        return err;
    }
    printf("The sum of ");
    for (int i = 1; i < argc; i++) {
        printf("%s", argv[i]);
        if (i < argc - 1) {
            printf(" and ");
        }
    }
    printf(" is %d\n", sum);
    return 0;
}
