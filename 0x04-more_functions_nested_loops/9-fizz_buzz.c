#include <stdio.h>
/**
 * main - hi
 * Return: ..
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x != 1)
		{
		printf(" ");
		}
		if (((x % 3) == 0) && ((x % 5) == 0))
		printf("FizzBuz");
		else if ((x % 3) == 0)
		printf("Fizz");
		else if ((x % 5) == 0)
		printf("Buzz");
		else
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
