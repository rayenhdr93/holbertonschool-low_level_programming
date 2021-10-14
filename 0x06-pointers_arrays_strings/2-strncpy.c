#include "main.h"
#include <string.h>
/**
 * _strncpy - hi
 * @dest: hi
 * @src: hi
 * @n: hi
 * Return: hi
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x, b, i, j, a;

	b = strlen(src);
	a = strlen(dest);
	if (n > b)
	{
	j = b;
	for (x = b - 1; x < (a - 1); x++)
	dest[x] = '\0';
	dest[a - 1] = '\n';
	}
	else
	j = n;
	i = 0;
	for (x = 0; x < (j - 1); x++)
	{
		dest[x] = src[i];
		i++;
	}
	return (dest);
}
