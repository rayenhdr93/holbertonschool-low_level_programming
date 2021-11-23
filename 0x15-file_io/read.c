#include "main.h"
/**
 * readfromfile - hi
 * @filename: hi
 * Return: hi
 */
char *readfromfile(char *filename)
{
	char *c;
	int x = 0, y = 1024, i = 1;

	if (filename == NULL)
		return (0);
	x =	open(filename, O_RDONLY);
	if (x == -1)
	{
		exit(98);
		printf("Error: Can't read from");
	}
	while (y == 1024)
	{
		c = realloc(1024 * i);
		i++;
		y = read(x, c, 1024);
		if (y == -1)
		{
			exit(98);
			printf("Error: Can't read from");
		}
	}
	close(x);
	return (c);
}
