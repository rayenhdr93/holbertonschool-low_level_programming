#include "main.h"
#include "limits.h"
/**
 * power2 - hi
 * @n: hi
 * Return: hi
 */
unsigned long int power2(unsigned long int n)
{
	unsigned long int x = 1;

	while (x < n)
	x *= 2;
	if (x > n)
	x = x >> 1;
	return (x);
}
/**
 * print_binary - hi
 * @n: hi
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, x;

	if (n == ULONG_MAX)
	{
		i = 0;
		while (i < 34)
		{
			_putchar('1');
			i++;
		}
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	x = power2(n);
	for (i = x; i > 0; i = i >> 1)
	{
		if (n & i)
		_putchar('1');
		else
		_putchar('0');
	}
}
