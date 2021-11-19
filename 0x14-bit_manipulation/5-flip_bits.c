#include "main.h"
#include "limits.h"
/**
 * flip_bits - hi
 * @n: hi
 * @m: hi
 * Return: hi
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0;
	int i = 0;
	int c = 0;

	x = n ^ m;
	c = x;
	while (x > 0)
	{
		x = x >> 1;

		if ((x * 2) != c)
			i += 1;
		c = x;
	}
	return (i);
}
