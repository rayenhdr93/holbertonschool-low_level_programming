#include <stdio.h>
#include "main.h"
/**
 * print_triangle - hi
 * @size: hi
 */
void print_triangle(int size)
{
	int x, s, i, j;

	if (size > 0)
	{
	s = size;
	for (x = 1; x <= size; x++)
	{
		s = s - 1;
		for (j = 1; j <= s ; j++)
			_putchar(' ');
		for (i = 1; i <= (size - s); i++)
			_putchar('#');
		_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
