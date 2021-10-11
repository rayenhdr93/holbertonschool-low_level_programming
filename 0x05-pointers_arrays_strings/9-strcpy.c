#include "main.h"
#include <string.h>
/**
 * _strcpy - hi
 * @dest: hi
 * @src: hi
 * Return: hi
 */
char *_strcpy(char *dest, char *src)
{
	int i, x;

	x = strlen(src);
	for (i = 0; i <= x; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
