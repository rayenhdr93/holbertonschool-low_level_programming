#include <string.h>
#include "main.h"
/**
 * puts_half - hi
 * @str: hi
 */
void puts_half(char *str)
{
	int i, n, x;

	if ((strlen(str) % 2) == 0)
	n = strlen(str) / 2;
	else
	n = (strlen(str) - 1) / 2;
	x = strlen(str);
	for (i = n; i <= x; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
