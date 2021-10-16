#include "main.h"
#include <stdio.h>
/**
 * print_number - hi
 * @n: hi
 */
void print_number(int n)
{
	int x, n1, d, r;

	n1 = n;
	if (n == 0)
	_putchar(n + 48);
	else if ((n > 0) && (n < 10))
	{
	x = n1 % 10;
	_putchar(x + 48);
	}
	else if ((n < 0) && (n > -10))
	{
	n1 = -n1;
	x = n1 % 10;
	_putchar('-');
	_putchar(x + 48);
	}
	else
	{
	if (n < 0)
	{
	_putchar('-');
	d = -1;
	}
	else
	d = 1;
	r = 11;
	while (r >= 10)
	{
	d = d * 10;
	r = n1 / d;
	}
	while ((d > 0) || (d < 0))
	{
		x = n1 / d;
		n1 = n1 % d;
		_putchar(x + 48);
		d = d / 10;
	}
	}
}
