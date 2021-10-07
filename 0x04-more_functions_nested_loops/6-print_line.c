#include <stdio.h>
#include "main.h"

/**
 * print_line - hi
 * @n: hi
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
