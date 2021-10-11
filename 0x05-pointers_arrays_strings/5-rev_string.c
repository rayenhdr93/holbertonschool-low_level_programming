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
	char x[9];

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		x[(strlen(s) - 1) - i] = s[i];
	}
	strcpy(s, x);
}
