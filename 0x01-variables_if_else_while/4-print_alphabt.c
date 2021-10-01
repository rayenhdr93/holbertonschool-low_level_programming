#include <stdio.h>
/**
 * main - Prints "hi"
 *
 * Return: hi
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'z' ; x++)
if (x != 101 && x != 113)
{
putchar(x);
}
putchar('\n');
return (0);
}
