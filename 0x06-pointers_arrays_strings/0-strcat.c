#include "main.h"
#include <string.h>
/**
 * _strcat - hi
 * @dest: hi
 * @src: hi
 * Return: hi
 */
char *_strcat(char *dest, char *src)
{
	int x, a, b, i;

	a = strlen(dest);
	b = strlen(src);
	i = 0;
	for (x = a; x < b + a; x++)
	{
		dest[x] = src[i];
		i++;
	}
	return (dest);
}
