#include <stdio.h>
#include "main.h"
/**
 * times_table - hi
 *
 * Return: hi
 */
void times_table(void)
{
	int x, y, d, a, m, n, p;

	d = -1;
	for (x = 0; x <= 9; x++)
	{
		d = d + 1;
		a = 48;
		for (y = 0; y <= 9; y++)
		{
			if (a > 57)
			{
				p = (a - 48) / 10;
				m = p + 48;
				n = (a - 10 * p);
				_putchar(m);
				_putchar(n);
			}
			else
			{
			_putchar(' ');
			_putchar(a);
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			a = a + d;
		}
	_putchar('\n');
	}
}
