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
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
