#include "stdlib.h"
#include <stdio.h>
/**
 * alloc_grid - hi
 * @width: hi
 * @height: hi
 * Return: hi
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **g = malloc(sizeof(int) * width);

	if ((width <= 0) || (height <= 0))
	return (NULL);
	for (i = 0; i < height; i++)
		g[i] = malloc(sizeof(int) * width);
	if (!g)
	return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}
	return (g);
}
