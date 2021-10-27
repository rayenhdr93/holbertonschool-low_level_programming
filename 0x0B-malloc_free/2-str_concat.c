#include "stdlib.h"
#include "string.h"
/**
 * str_concat - hi
 * @s1: hi
 * @s2: hi
 * Return: hi
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int x, y, i, j;

	x = strlen(s1);
	y = strlen(s2);
	str = malloc(sizeof(char) * ((x + y) + 1));
	for (i = 0; i < x; i++)
	str[i] = s1[i];
	i = x - 1;
	for (j = 0; j < y; j++)
	{
	i++;
	str[i] = s2[j];
	}
	return (str);
}
