#include "main.h"
#include <string.h>
/**
 * rot13 - hi
 * @c: i
 * Return: hi
 */
char *rot13(char *c)
{
int i, j, x, k;
char car[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rep[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	x = strlen(c);
	for (i = 0; i < x; i++)
	{
		k = 0;
		for (j = 0; j < 53; j++)
		{
			if ((c[i] == car[j]) && (k == 0))
			{
			c[i] = rep[j];
			k = 1;
			}
		}
	}
	return (c);
}
