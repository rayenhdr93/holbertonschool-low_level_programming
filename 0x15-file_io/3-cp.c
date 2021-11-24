#include "main.h"
/**
 * readfromfile - hi
 * @x: hi
 * Return: hi
 */
char *readfromfile(char x)
{
	char *c;
	int y = 0;

	c = malloc(1024);
	y = read(x, c, 1024);
	if (y == -1)
	{
		exit(98);
		printf("Error: Can't read from");
	}
	return (c);
}
/**
 * writetofile - hi
 * @x: hi
 * @ch: hi
 * Return: hi
 */
void writetofile(char x, char *ch)
{
	int y = 0;

	if (ch)
		y = write(x, ch, strlen(ch));
	if (y == -1)
	{
		exit(99);
		printf("Error: Can't write to");
	}
}
/**
 * main - hi
 * @ac: hi
 * @av: hi
 * Return: hi
 */
int main(int ac, char **av)
{
	char *ch;
	int x = 0, y = 0, a = 0, b = 0, l = 1024;

	if (ac != 3)
	{
		exit(97);
		printf("Usage: cp file_from file_to");
	}
		if (av[1] == NULL)
		return (0);
	x =	open(av[1], O_RDONLY);
	if (x == -1)
	{
		exit(98);
		printf("Error: Can't read from");
	}
		if (!av[2])
	{
		exit(99);
		printf("Error: Can't write to");
	}
	a = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (a == -1)
	{
		exit(99);
		printf("Error: Can't write to");
	}
	while (l == 1024)
	{
	ch = readfromfile(x);
	l = strlen(ch);
	if (l > 0)
	writetofile(a, ch);
	}
	y = close(x);
	if (y == -1)
	{
		printf("Error: Can't close fd %d", y);
		exit(100);
	}
	b = close(a);
	if (b == -1)
	{
		printf("Error: Can't close fd %d", b);
		exit(100);
	}
	return (0);
}
