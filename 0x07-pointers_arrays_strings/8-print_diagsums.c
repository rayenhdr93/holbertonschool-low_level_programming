#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - hi
 * @a: hi
 * @size: hi
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int x = 0;
	int y = 0;

	while (i < (size * size))
	{
		x = x + a[i];
		i = i + size + 1;
	}
	while (j < (size * size - 1))
	{
		y = y + a[j];
		j = j + size - 1;
	}
	printf("%d, ", x);
	printf("%d\n", y);
}
