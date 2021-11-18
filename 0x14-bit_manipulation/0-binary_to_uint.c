#include "main.h"
/**
 * binary_to_uint - hi
 * @b: char
 * Return: hi
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unint = 0;
	int pow, i;

	if (b == NULL)
	return (0);
	pow = 1;
	i = strlen(b);
	while (i > 0)
	{
		i--;
		if (b[i] == '1')
		unint = unint + pow;
		else if (b[i] != '0')
		return (0);
		pow *= 2;
	}
	return (unint);
}
