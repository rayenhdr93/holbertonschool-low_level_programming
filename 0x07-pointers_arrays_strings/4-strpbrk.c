#include "main.h"
#include <string.h>
/**
 * _strpbrk - hi
 * @s: hi
 * @accept: hi
 * Return: hi
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x, b;

	x = strlen(accept);
	b = 0;
	while ((*s != '\0') && (b == 0))
	{
	for (i = 0; i < x; i++)
	{
	if (*s == accept[i])
	{
		i = x;
		b = 1;
	}
	}
	if (b == 0)
	{
		s++;
	}
	}
	if (b == 1)
		return (s);
	else
		return (NULL);
}
