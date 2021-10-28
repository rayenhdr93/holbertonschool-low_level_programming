#include "stdlib.h"
#include "string.h"
/**
 * string_nconcat - hi
 * @s1: hi
 * @s2: hi
 * @n: hi
 * Return: hi
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int i, x, y;

	x = strlen(s1);
	y = strlen(s2);
	if (n >= y)
		n = y;
	ch = malloc(x + n);
	if (!ch)
		return (NULL);
	for (i = 0; i < (x + n); i++)
	{
		if (i < x)
			ch[i] = s1[i];
		else
			ch[i] = s2[i - x];
	}
	return (ch);
}
