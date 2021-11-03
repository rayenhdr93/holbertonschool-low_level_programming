#include "function_pointers.h"
/**
 * int_index - hi
 * @array: hi
 * @size: hi
 * @cmp: hi
 * Return: hi
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int x = 0;

	if (size <= 0)
	return (-1);
	while (i < size)
	{
		x = (*cmp)(array[i]);
		if (x > 0)
			return (i);
		i++;
	}
	return (-1);
}
