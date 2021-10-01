#include <stdio.h>
/**
 * main - Prints "hi"
 *
 * Return: hi
 */
int main(void)
{
int x, y, z, r, b;
for (x = '0'; x <= '9'; x++)
{
for (y = '0'; y <= '9'; y++)
{
for (z = x; z <= '9' ; z++)
{
if (z == '0')
b = y + 1;
else
b = '0';
for (r = b; r <= '9'; r++)
{
if (!(r == '1' && z == '0'))
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
