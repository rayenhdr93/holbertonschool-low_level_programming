#include "main.h"
#include <string.h>
/**
 * _strspn - hi
 * @s: hi
 * @accept: hi
 * Return: hi
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int j, x, y, i;

	x = strlen(accept);
	y = strlen(s);
	for (j = 0; j < y; j++)
	{
	i = 0;
	while ((s[j] != accept[i]) && (i < x))
	{
		i++;
	}
	if (s[j] == accept[i])
		r++;
	else
	{
	j = y;
	i = x;
	}
	}
	return (r);
}
