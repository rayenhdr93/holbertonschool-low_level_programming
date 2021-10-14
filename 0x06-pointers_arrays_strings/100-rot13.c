#include "main.h"
#include <string.h>
/**
 * rot13 - hi
 * @c: i
 * Return: hi
 */
char *rot13(char *c)
{
int i, j, x;
char car[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rep[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	x = strlen(c);
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < 52 ; j++)
		{
			if (c[i] == car[j])
			c[i] = rep[j];
		}
	}
	return (c);
}
