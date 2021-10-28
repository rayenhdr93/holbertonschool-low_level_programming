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
	void *p;

	p = malloc(size * nmemb);
	if (!p)
		return (NULL);
	if ((size == 0) || (nmemb == 0))
		return (NULL);
	return (p);
}
