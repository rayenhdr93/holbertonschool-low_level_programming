#include "stdlib.h"
/**
 * malloc_checked - hi
 * @b: hi
 * Return: hi
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
