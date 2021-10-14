#include "main.h"
#include <string.h>
/**
 * _strcmp - hi
 * @s1: hi
 * @s2: hi
 * Return: hi
 */
int _strcmp(char *s1, char *s2)
{
	int a, b, x, i, aa;

	a = strlen(s1);
	b = strlen(s2);
	if (a < b)
	x = a;
	else
	x = b;
	i = 0;
	while ((s1[i] == s2[i]) && (i <= x))
	i++;
	if ((i > a) && (i > b))
		aa = 0;
	else if (s1[i] != s2[i])
	aa = s1[i] - s2[i];
	return (aa);
}
