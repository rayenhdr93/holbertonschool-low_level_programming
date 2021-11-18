#include "main.h"
/**
 * set_bit - hi
 * @n: hi
 * @index: hi
 * Return: hi
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index == 0)
	{
	*n = *n + 1;
	return (1);
	}
	i = i << index;
	*n = *n + i;
	return (1);
}
