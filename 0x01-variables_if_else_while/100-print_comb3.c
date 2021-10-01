#include <stdio.h>
/**
 * main - Prints "hi"
 *
 * Return: hi
 */
int main(void)
{
int x, y;
for (x = '0'; (y = '8') && (x < '9'); x++)
{
for (y = x + 1 ; y <= '9'; y++)
{
if (y > '1')
{
putchar(',');
putchar(' ');
}
if (x != y)
{
putchar(x);
putchar(y);
}
}
}
putchar('\n');
return (0);
}
