#include "stdlib.h"
#include "stdio.h"
#include "string.h"
/**
 * num - hi
 * @c: hi
 * Return: hi
 */
int num(char *c)
{
	int y, i, x = 0, b, j = 1;

	y = strlen(c);
	for (i = y - 1; i >= 0; i--)
	{
		if ((c[i] < 58) && (c[i] > 47))
		{
			b = c[i] - 48;
			x = x + (b * j);
			j = j * 10;
		}
		else if (c[i] == '-')
			x = -x;
		else
		return (94366);
	}
	return (x);
}
/**
 * main - hi
 * @argc: hi
 * @argv: hi
 * Return: hi
 */
int main(int argc, char *argv[])
{
	int i = 0, s = 1, ar = 0;

	for (i = 1; i < argc; i++)
	{
	ar = num(argv[i]);
	if (ar != 94366)
	s = s * ar;
	else
	{
	break;
	}
	}
	if (argc > 1)
	{
		printf("%d\n", s);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (ar);
	}
}

