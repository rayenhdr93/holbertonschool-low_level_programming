#include "main.h"
/**
 * create_file - hi
 * @filename: hi
 * @text_content: hi
 * Return: hi
 */
int create_file(const char *filename, char *text_content)
{
	int x = 0, y;

	if (!filename)
		return (-1);
	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (x == -1)
		return (-1);
	if (text_content)
		y = write(x, text_content, strlen(text_content));
	if (y == -1)
		return (-1);
	close(x);
	return (1);
}
