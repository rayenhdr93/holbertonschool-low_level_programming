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

	if (index == 0)
	{
		*n = *n - 1;
		return (1);
	}
	i = i << index;
	if (i <= *n)
	{
	*n = *n - i;
	return (1);
	}
	else
	{
		*n = 0;
		return (-1);
	}
}
