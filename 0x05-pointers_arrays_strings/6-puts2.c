#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - hi
 * @str: hi
 */
void puts2(char *str)
{
	int i, t;

	if (strlen(str) > 1)
	{
	t = strlen(str) - 1;
	for (i = 0; i <= t; i++)
	{
		if ((i % 2) == 0)
		{
		_putchar(str[i]);
		}
	}
	}
	_putchar('\n');
}
