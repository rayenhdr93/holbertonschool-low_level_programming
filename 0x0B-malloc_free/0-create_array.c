#include <stdlib.h>
/**
 * create_array - hi
 * @size: hi
 * @c: hi
 * Return: hi
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size > 0)
	{
	ar = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
	}
	else
	return (NULL);
}
