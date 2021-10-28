#include <stdio.h>
#include "main.h"
/**
 * print_number - hi
 */
void print_number(int n)
{
	int x;
	char h,s;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (n >= 10)
	{
		x = n % 10;
		h = x + h;
		n = n / 10;
	}
	_putchar(n + 48);
	s = h[0];
	_putchar(s);
}
