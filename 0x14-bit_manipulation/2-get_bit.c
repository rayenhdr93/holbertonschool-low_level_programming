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

	n = n >> index;
	if (n < 1)
	return (-1);
	x = n % 2;
	return (x);
}
