#include <stdio.h>
#include <math.h>
/**
 * main - hi
 * Return: hi
 */
int main(void)
{
	long int x, i, y, t;

	x = 612852475143;
	y = 50829600;
	for (i = 2; i <= y; i++)
	{
		while ((x % i) == 0)
		{
			t = i;
			x = x / i;
		}
	}
	printf("%ld\n", t);
	return (0);
}
