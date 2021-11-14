#include "main.h"
#include "stdio.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_last_digit(98);
 	printf("\n");
    print_last_digit(-2147483648);
    printf("\n");
    print_last_digit(55893);
    printf("\n");
    return (0);
}
