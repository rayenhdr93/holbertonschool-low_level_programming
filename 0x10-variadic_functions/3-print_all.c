#include "variadic_functions.h"
/**
 * printint - hi
 * @a: hi
 */
void printint(int a)
{
	printf("%d",a)
}
/**
 * print_all - hi
 * @format: hi
 */
void print_all(const char * const format, ...)
{
	unsigned int x, i, j;
	x = strlen(format);
	i = 0;
	char f[4] = {'c','i','f','s'};
	va_list ls;

	va_start(ls, ...);
	while (i < n)
	{
		j = 0;
		while ((j < 4) && (format[i] != f[j]))
		{
		j += 1;
		}
		if (format[i] == f[j])
		{
		}
		i++;
	}
	printf("%d", x)
	printf("\n");
}
