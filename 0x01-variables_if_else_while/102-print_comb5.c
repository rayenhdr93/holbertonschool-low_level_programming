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
if (y == '9')
{
r = '0';
z = x + 1;
}
else
{
r = y + 1;
z = x;
}
for (; z <= '9' ; z++)
{
for (; r <= '9'; r++)
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
