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
		if (c[0] == '-')
			return (-1);
		else if ((c[i] < 58) && (c[i] > 47))
		{
			b = c[i] - 48;
			x = x + (b * j);
			j = j * 10;
		}
		else
		{
			x = -1;
			return (-1);
		}
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
	int i = 0, s = 0, ar = 0;

	for (i = 1; i < argc; i++)
	{
	ar = num(argv[i]);
	if (ar > 0)
	s = s + ar;
	else
	{
		argc = 0;
		break;
	}
	}
	if (argc > 0)
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

