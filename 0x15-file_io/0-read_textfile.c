#include "main.h"
/**
 * read_textfile - hi
 * @filename: hi
 * @letters: hi
 * Return: hi
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c = malloc(sizeof(char) * letters);
	int x = 0, y;

	if (filename == NULL)
	return (0);
	x =	open(filename, O_RDONLY);
	if (x == -1)
	return (0);
	y = read(x, c, letters);
	if (y == -1)
	return (0);
	y = write(STDOUT_FILENO, c, y);
	if (y == -1)
	return (0);
	close(x);
	return (y);
}
