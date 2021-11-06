#include "variadic_functions.h"
/**
 * print_strings - hi
 * @separator: hi
 * @n: hi
 * Return: hi
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;
	va_list ls;

	if (n == 0)
	{
	printf("\n");
	exit(0);
	}
	va_start(ls, n);
	for (a = 0; a < n; a++)
	{
		if (str != NULL)
		{
		str = va_arg(ls, char*);
		printf("%s", str);
		}
		else
		printf("(nil)");
		if (a == n - 1)
		printf("\n");
		else if ((a != n - 1) && (separator != NULL))
		printf("%s", separator);
	}
	va_end(ls);
}
