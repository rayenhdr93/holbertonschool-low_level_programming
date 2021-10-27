#include <stdlib.h>
#include "string.h"
/**
 * _strdup - hi
 * @str: hi
 * Return: hi
 */
char *_strdup(char *str)
{
	char *ch;
	int x, i;

	if (str)
	{
	x = strlen(str);
	ch = malloc(sizeof(char) * x);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		ch[i] = str[i];
	return (ch);
	}
	else
	return (NULL);
}
