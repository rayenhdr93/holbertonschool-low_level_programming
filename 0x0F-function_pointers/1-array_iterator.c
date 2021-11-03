#include "function_pointers.h"
/**
 * array_iterator - hi
 * @array: hi
 * @size: hi
 * @action: hi
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
	for (i = 0; i < size; i++)
	(*action)(array[i]);
	}
}
