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

	if (c < 0)
	c = -c;
	x = c % 10;
	z = x + 48;
	_putchar(z);
	return (x);
}
