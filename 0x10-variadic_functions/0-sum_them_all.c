#include "variadic_functions.h"
/**
 * sum_them_all - hi
 * @n: hi
 * Return: hi
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list ls;

	if (n == 0)
	return (0);
	va_start(ls, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(ls, int);
	}
	va_end(ls);
	return (sum);
}
