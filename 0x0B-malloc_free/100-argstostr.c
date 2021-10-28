#include "main.h"
#include <string.h>
/**
 * argstostr - hi
 * @ac: hi
 * @av: hi
 */
char *argstostr(int ac, char **av)
{
	char ch[10000];
	char *p = ch;
	int i, x, j, y;
	
	y = -1;
	for (i = 1; i < ac; i++)
	{
		y++;
		x = strlen(av[i]);
		for (j = 0; j < x; j++)
			ch[y] = av[i][j];
	}
	return (p);
}
