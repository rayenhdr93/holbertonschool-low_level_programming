#include "main.h"
/**
 * clear_bit - hi
 * @n: hi
 * @index: hi
 * Return: hi
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	i = i << index;
	*n = *n - i;
	return (1);
}
