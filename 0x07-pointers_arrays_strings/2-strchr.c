#include "main.h"
#include <stdio.h>
/**
 * _strchr - hi
 * @s: hi
 * @c: hi
 * Return: hi
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*s != c)
	{
		s++;
		p++;
	}
	if (*s != c)
		return (NULL);
	else
		return (p);
}
