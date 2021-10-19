#include "main.h"
/**
 * _memset - hi
 * @s:hi
 * @b:hi
 * @n:hi
 * Return: hi
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
