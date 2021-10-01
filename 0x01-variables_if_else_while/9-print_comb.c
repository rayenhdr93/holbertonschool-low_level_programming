#include <stdio.h>
/**
 * main - Prints "hi"
 *
 * Return: hi
 */
int main(void)
{
int x;
for (x = 48; x <= 57; x++)
{
if (x > 48)
{
putchar(',');
putchar(' ');
}
putchar(x);
}
putchar('\n');
return (0);
}
