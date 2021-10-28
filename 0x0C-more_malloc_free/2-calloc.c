#include "stdlib.h"
#include "string.h"
/**
 * _calloc - hi
 * @nmemb: hi
 * @size: hi
 * Return: hi
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p = malloc(size * nmemb);

	if (!p)
		return (NULL);
	if ((size == 0) || (nmemb == 0))
		return (NULL);
	memset(p, 0, size);
	return (p);
}
