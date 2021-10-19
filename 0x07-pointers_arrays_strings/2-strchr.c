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
	int i = 0;

	while ((*s != c) && (*s != '\0'))
	{
		s++;
		i++;
	}
	if (*s == c)
		return (p + i);
	else
		return (NULL);
}
