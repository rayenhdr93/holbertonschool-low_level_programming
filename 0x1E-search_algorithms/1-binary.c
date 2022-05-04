#include "search_algos.h"
/**
 * binary_search - func
 * @array: a
 * @size: s
 * @value: v
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t m, l, r, i;

	if (!array)
		return (-1);
	l = 0;
	r = size - 1;
	while (l <= r)
	{
		printf("Searching in array:");
		printf(" %d", array[l]);
		for (i = l + 1; i <= r; i++)
			printf(", %d", array[i]);
		printf("\n");
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
