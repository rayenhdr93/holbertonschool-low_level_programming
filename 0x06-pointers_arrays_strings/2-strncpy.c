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
	int x, b, i;

	b = strlen(src);
	i = 0;
	for (x = 0; x < n; x++)
	{
		if (n >= b)
		dest[x] = ' ';
		dest[x] = src[i];
		i++;
	}
	return (dest);
}
