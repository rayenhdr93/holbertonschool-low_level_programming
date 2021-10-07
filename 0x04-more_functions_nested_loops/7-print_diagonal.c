#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - hi
 * @n: hi
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
		{
		for (x = 0; x < y; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
