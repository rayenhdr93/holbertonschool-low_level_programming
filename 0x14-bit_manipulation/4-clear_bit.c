#include "main.h"
/**
 * clear_bit - hi
 * @n: hi
 * @index: hi
 * Return: hi
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 34)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
