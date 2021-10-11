#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - hi
 * @s: hi
 */
void rev_string(char *s)
{
	int i;
	char x[10];

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		strcat( x, s[i]);
	}
	strcpy( s, x);
}
