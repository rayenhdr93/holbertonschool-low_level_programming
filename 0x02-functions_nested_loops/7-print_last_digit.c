#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - hi
 * @c: hi
 *
 * Return: hi
 */
int print_last_digit(int c)
{
	int x, z;
	c = abs(c);
	x = c % 10;
	z = x + 48;
	_putchar(z);
	return(x);
}
