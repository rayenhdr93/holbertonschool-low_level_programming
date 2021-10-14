#include "main.h"
#include <string.h>
/**
 * string_toupper - hi
 * @c: hi
 * Return: hi
 */
char *string_toupper(char *c)
{
	int i, n;

	n = strlen(c);
	for (i = 0; i < n; i++)
	if ((c[i] > 96) && (c[i] < 123))
		c[i] = c[i] - 32;
	return (c);
}
