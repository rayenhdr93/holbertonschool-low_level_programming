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
	char *p = malloc(size * nmemb);
	unsigned int i;

	if (!p)
		return (NULL);
	if ((size == 0) || (nmemb == 0))
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(p + i) = 0;
	return (p);
}
