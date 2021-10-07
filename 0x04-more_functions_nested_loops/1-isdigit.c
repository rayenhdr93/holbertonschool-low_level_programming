#include <ctype.h>
#include "main.h"

/**
 * _isdigit - hi
 * @c: hi
 * Return: hi
 */
int _isdigit(int c)
{
	int x;

	if (isdigit(c))
		x = 1;
	else
		x = 0;
	return (x);
}
