#include "main.h"
/**
 * get_bit - hi
 * @n: hi
 * @index: hi
 * Return: hi
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 34)
		return (-1);
	n = n >> index;
	x = n % 2;
	return (x);
}
