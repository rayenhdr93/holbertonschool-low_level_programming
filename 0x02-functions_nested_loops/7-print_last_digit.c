#include <stdio.h>
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

	x = c;
	x = x % 10;
	if (c < 0)
	x = -x;
	z = x + 48;
	_putchar(z);
	return (x);
}
