#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _putchar - hi
 * @c: hi
 *
 * Return: hi
 */
int _putchar(char c)
{
return (write(1, &c, 1));
};
/**
 * print_alphabet - hi
 */
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	_putchar(x);
	_putchar('\n');
}
/**
 * print_alphabet_x10 - hi
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (y = 48; y <= 57; y++)
	{
	for (x = 97; x <= 122; x++)
		_putchar(x);
	_putchar('\n');
	}
}
#endif /* MAIN.H */
