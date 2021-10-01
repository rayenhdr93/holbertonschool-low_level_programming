#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - "hi"
 *
 * Return: hi
 */
int main(void)
{
int n,x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (n > 5)
printf("Last digit of %d is %d and is greater than 5", n, x);
else
if (n == 0)
printf("%d is zero", n);
else
if (n < 6)
printf("Last digit of %d is %d nd is less than 6 and not 0", n, x);
return (0);
}
