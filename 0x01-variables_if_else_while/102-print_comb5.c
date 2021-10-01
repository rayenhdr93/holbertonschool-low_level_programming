#include <stdio.h>
/**
 * main - Prints "hi"
 *
 * Return: hi
 */
int main(void)
{
int x, y, z, r;
for (x = '0'; x <= '9'; x++)
{
for (y = '0'; y <= '9'; y++)
{
for (z = x; z <= '9' ; z++)
{
for (r = x + 1; r <= '9'; r++)
{
if (r > '1')
{
putchar(',');
putchar(' ');
}
putchar(x);
putchar(y);
putchar(' ');
putchar(z);
putchar(r);
}
}
}
}
putchar('\n');
return (0);
}
