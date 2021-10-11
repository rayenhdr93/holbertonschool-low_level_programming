#include "main.h"
#include <stdio.h>
/**
 * print_array - hi
 * @a: ho
 * @n: hi
 */
void print_array(int *a, int n)
{
	int i;

	n = n - 1;
	for (i = 0; i <= n; i++)
	{
		if (i != n)
		printf("%d ,", a[i]);
		else
		printf("%d\n", a[i]);
	}
}
