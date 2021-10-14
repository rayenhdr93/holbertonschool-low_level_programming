#include "main.h"
#include <string.h>
/**
 * _strncat - hi
 * @dest: hi
 * @src: hi
 * @n: hi
 * Return: hi
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, a, b, i;

	a = strlen(dest);
	b = strlen(src);
	if (n > b)
		n = b;
	i = 0;
	for (x = a; x < n + a; x++)
	{
		dest[x] = src[i];
		i++;
	}
	return (dest);
}
