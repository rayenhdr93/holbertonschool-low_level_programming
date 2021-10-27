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

	x = 0;
	y = 0;
	if (s1)
	x = strlen(s1);
	if (s2)
	y = strlen(s2);
	str = malloc(sizeof(char) * ((x + y) + 1));
	if (!str)
		return (NULL);
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
