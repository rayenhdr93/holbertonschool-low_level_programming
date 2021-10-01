#include <stdio.h>
/**
 * main - Prints "hi"
 *
 * Return: hi
 */
int main(void)
{
int x, y, z;
for (x = '0'; x <= '7'; x++)
{
	for (y = x + 1; y <= '8'; y++)
	{
		for (z = y + 1; z <= '9'; z++)
			{
			if (z > '2')
				{
				putchar(',');
				putchar(' ');
				}
				{
				putchar(x);
				putchar(y);
				putchar(z);
				}
			}
	}
}
	putchar('\n');
	return (0);
}
