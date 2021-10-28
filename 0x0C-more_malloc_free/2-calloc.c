#include "stdlib.h"
/**
 * _calloc - hi
 * @nmemb: hi
 * @size: hi
 * Return: hi
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p = malloc(size * nmemb);
	unsigned int i;

	if (!p)
		return (NULL);
	if ((size == 0) || (nmemb == 0))
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
