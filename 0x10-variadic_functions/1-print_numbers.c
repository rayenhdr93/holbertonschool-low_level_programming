#include "variadic_functions.h"
/**
 * print_numbers - hi
 * @separator: hi
 * @n: hi
 * Return: hi
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	int arg;
	va_list ls;

	va_start(ls, n);
	for (a = 0; a < n; a++)
	{
		arg = va_arg(ls, int);
		printf("%d", arg);
		if (a == n - 1)
		printf("\n");
		else if ((a != n - 1) && (separator != NULL))
		printf("%s", separator);
	}
	va_end(ls);
}
