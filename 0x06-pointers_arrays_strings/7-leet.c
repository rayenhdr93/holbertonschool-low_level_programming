#include "main.h"
#include <string.h>
/**
 * leet - hi
 * @c: hi
 * Return: hi
 */
char *leet(char *c)
{
	int i, j, x;
	char car[10] = "AEOTLaeotl";
	char rep[10] = "4307143071";

	x = strlen(c);
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == car[j])
			c[i] = rep[j];
		}
	}
	return (c);
}
