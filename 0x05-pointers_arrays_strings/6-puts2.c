#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - hi
 * @str: hi
 */
void puts2(char *str)
{
	int i, j;

	char x[1000];

	j = 0;
	if (strlen(str) > 1)
	{
	for (i = 0; i <= 10; i++)
	{
		if ((i % 2) == 0)
		{
		x[j] = str[i];
		j++;
		}
	}
	puts(x);
	}
}