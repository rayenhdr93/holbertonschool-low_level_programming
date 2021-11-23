#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: destination
 * @src: source
 * @n: size
 *
 * Return: pointer to dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
/**
 * _realloc - reallocates a memory block
 * @ptr: old mem
 * @old_size: old_size
 * @new_size: new_size
 *
 * Return: new mem
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return (nptr);
	}

	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(old_size + (new_size - old_size));

	_memcpy(nptr, ptr, old_size);

	free(ptr);

	return (nptr);
}
/**
 * readfromfile - hi
 * @filename: hi
 * Return: hi
 */
char *readfromfile(char *filename)
{
	char *c = malloc(1024);
	int x = 0, y = 1024, i = 1024;

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
		y = read(x, c, 1024);
		if (y == -1)
		{
			exit(98);
			printf("Error: Can't read from");
		}
		i *= 2;
		c = _realloc(c, i - 1024, i);
	}
	y = close(x);
	if (y == -1)
	{
		printf("Error: Can't close fd %d", y);
		exit(100);
	}
	return (c);
}
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
	y = close(x);
	if (y == -1)
	{
		printf("Error: Can't close fd %d", y);
		exit(100);
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

	if (ac != 3)
	{
		exit(97);
		printf("Usage: cp file_from file_to");
	}
	ch = readfromfile(av[1]);
	writetofile(av[2], ch);
	free(ch);
	return (0);
}
