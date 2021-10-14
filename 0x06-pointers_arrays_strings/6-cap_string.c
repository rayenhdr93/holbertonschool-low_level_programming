#include "main.h"
#include <string.h>
/**
 * cap_string - hi
 * @c: hi
 * Return: hi
 */
char *cap_string(char *c)
{
	int i, w, x;

	x = strlen(c);
	w = 1;
	for (i = 0; i < x; i++)
	{
		if (w == 1)
			if ((c[i] > 97) && (c[i] < 123))
				c[i] = c[i] - 32;

		if ((c[i] == ' ') || (c[i] == '\n') || (c[i] == '.')
			|| (c[i] == '\t') || (c[i] == ',') || (c[i] == ';')
			|| (c[i] == '!') || (c[i] == '?') || (c[i] == '"')
			|| (c[i] == '(') || (c[i] == ')') || (c[i] == '{') || (c[i] == '}'))
			w = 1;
		else
			w = 0;
	}
	return (c);
}
