#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - hi
 * @n: hi
 */
void print_diagonal(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x < n; x++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	}
	_putchar('\n');
}
