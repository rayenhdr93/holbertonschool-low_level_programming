#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_number - hi
 * @n: hi
 */
void print_number(int n)
{
	int x, i, t, j;
	char ch[100];

	i = 0;
	t = n;
	if (n == 0)
	_putchar(n + 48);
	else
	if (n < 0)
	{
	_putchar('-');
	t = -t;
	}
	while (t > 0)
	{
		x = t % 10;
		t = t / 10;
		ch[i] = x + 48;
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
		_putchar(ch[j]);
}
