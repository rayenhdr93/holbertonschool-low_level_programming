#include "main.h"
/**
 * clear_bit - hi
 * @n: hi
 * @index: hi
 * Return: hi
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 34)
		return (-1);
	i = i << index;
	printf("n = %ld\n", *n);
	printf("i = %d\n", i);
	if (i <= *n)
	{
	*n = *n - (i + 1);
	return (1);
	}
	else
	{
		*n = 0;
		return (-1);
	}
}
