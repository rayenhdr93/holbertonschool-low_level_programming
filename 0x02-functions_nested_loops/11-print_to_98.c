#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - hi
 * @n: hi
 * Return: hi
 */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
		printf("%d", x);
		if (x != 98)
		printf(", ");
		}
	}
	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
		printf("%d", x);
		if (x != 98)
		printf(", ");
		}
	}
	printf("\n");
}
