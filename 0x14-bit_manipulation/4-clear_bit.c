#include "main.h"
/**
 * clear_bit - hi
 * @n: hi
 * @index: hi
 * Return: hi
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	i = i << index;
	if (i <= *n)
	*n = *n - i;
	else
	*n = 0;
	return (1);
}
