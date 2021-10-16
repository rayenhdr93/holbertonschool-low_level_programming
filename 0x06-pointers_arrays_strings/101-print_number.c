#include "main.h"
#include <stdio.h>
/**
 * print_number - hi
 * @n: hi
 */
void print_number(int n)
{
	int x, i, n1, d, r;

	i = 0;
	n1 = n;
	if (n == 0)
	_putchar(n + 48);
	else
	if (n < 0)
	{
	_putchar('-');
	n1 = -n1;
	}
	d = 1;
	r = 11;
	while (r >= 10)
	{
	d = d * 10;
	r = n1 / d;
	}
	while (n1 > 0)
	{
		x = n1 / d;
		n1 = n1 % d;
		_putchar(x + 48);
		d = d / 10;
		i++;
	}
}
