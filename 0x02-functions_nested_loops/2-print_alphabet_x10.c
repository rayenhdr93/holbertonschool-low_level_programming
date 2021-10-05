#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - hi
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (y = 48; y <= 57; y++)
	{
	for (x = 97; x <= 122; x++)
		_putchar(x);
	_putchar('\n');
	}
}
