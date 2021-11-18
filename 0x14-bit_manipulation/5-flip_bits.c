#include "main.h"
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

	x = n ^ m;
	while (x > 0)
	{
		if ((x % 2) == 1)
			i += 1;
		x = x >> 1;
	}
	return (i);
}
