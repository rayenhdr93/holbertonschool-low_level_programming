#include "stdlib.h"
/**
 * array_range - hi
 * @min: hi
 * @max: hi
 * Return: hi
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (1 + (max - min)));
	if (!p)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
