#include "stdlib.h"
#include "stdio.h"
/**
 * main - hi
 * @argc: hi
 * @argv: hi
 * Return: hi
 */
int main(int argc, char *argv[])
{
	int x, y, a = 0;

	if (argc != 2)
	{
		a = a + 1;
		printf("Error\n");
		return (a);
	}
	else
	{
		x = atoi(argv[1]);
		y = x / 25;
		x = x % 25;
		a += y;
		if ((x / 10) > 0)
		{
			y = x / 10;
			x = x % 10;
			a += y;
		}
		if ((x / 5) > 0)
		{
			y = x / 5;
			x = x % 5;
			a += y;
		}
		if ((x / 2) > 0)
		{
			y = x / 2;
			x = x % 2;
			a += y;
		}
		if (x > 0)
		{
			a++;
		}
		printf("%d\n", a);
		return (0);
	}
}
