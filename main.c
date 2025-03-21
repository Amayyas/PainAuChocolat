/*
** EPITECH PROJECT, 2025
** PainAuChocolat_Tester
** File description:
** main
*/

#include "my.h"

int main(int argc, char **argv)
{
    int nb1 = 0;
    int nb2 = 0;
    int sum = 0;

    if (argc != 3) {
        printf("Error: please provide exactly two numbers.\n");
        printf("USAGE: %s number1 number2\n", argv[0]);
        return 84;
    }
    nb1 = atoi(argv[1]);
    nb2 = atoi(argv[2]);
    sum = nb1 + nb2;
    printf("The sum of %d and %d is %d\n", nb1, nb2, sum);
    return 0;
}
