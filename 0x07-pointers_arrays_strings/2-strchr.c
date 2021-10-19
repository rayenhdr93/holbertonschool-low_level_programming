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

	while ((*s != c) && (*s != '\0'))
	{
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
