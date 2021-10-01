#include <stdio.h>
/**
 * main - Prints "hi"
 *
 * Return: hi
 */
int main(void)
{
int x;
for (x = '0'; x <= '9' ; x++)
{
putchar(x);
}
for (x = 'a'; x <= 'f' ; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
