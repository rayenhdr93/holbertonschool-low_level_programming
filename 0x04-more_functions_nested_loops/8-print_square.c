#include <stdio.h>
#include "main.h"
/**
 * print_square - hi
 * @size: hi
 */
void print_square(int size)
{
int x, y;

for (x = 1; x <= size; x++)
{
	for (y = 1; y <= size; y++)
	{
		_putchar('#');
	}
_putchar('\n');
}
}
