#include "variadic_functions.h"
/**
 * printint - hi
 * @ls: hi
 */
void printint(va_list ls)
{
	printf("%d", va_arg(ls, int));
}
/**
 * printchar - hi
 * @ls: hi
 */
void printchar(va_list ls)
{
	printf("%c", va_arg(ls, int));
}
/**
 * printfloat - hi
 * @ls: hi
 */
void printfloat(va_list ls)
{
	printf("%f", va_arg(ls, double));
}
/**
 * printstring - hi
 * @ls: hi
 */
void printstring(va_list ls)
{
	char *ch;

	ch = va_arg(ls, char *);
	if (va_arg(ls, char *) != NULL)
		ch = "(nil)";
	printf("%s", ch);
}
/**
 * print_all - hi
 * @format: hi
 */
void print_all(const char * const format, ...)
{
	int x, i, j;
	op_t ops[] = {
	{'c', printchar},
	{'i', printint},
	{'f', printfloat},
	{'s', printstring},
	};
	va_list ls;
	char *ch;

	ch = "";
	i = 0;
	x = strlen(format);
	va_start(ls, format);
	while (i < x)
	{
		j = 0;
		while ((j < 4) && (format[i] != ops[j].op))
		{
		j++;
		}
		if (format[i] == ops[j].op)
		{
			printf("%s", ch);
			ops[j].f(ls);
		}
		i++;
		ch = ", ";
	}
	printf("\n");
}
