#include "main.h"
/**
 * writetofile - hi
 * @filename: hi
 * @ch: hi
 * Return: hi
 */
void writetofile(char *filename, char *ch)
{
	int x = 0, y;

	if (!filename)
	{
		exit(99);
		printf("Error: Can't write to");
	}
	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (x == -1)
	{
		exit(99);
		printf("Error: Can't write to");
	}
	if (ch)
		y = write(x, ch, strlen(ch));
	if (y == -1)
	{
		exit(99);
		printf("Error: Can't write to");
	}
	close(x);
	return (1);
}