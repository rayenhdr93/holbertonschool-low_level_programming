#include "main.h"
#include <string.h>
/**
 * conv - ho
 * @f: ho
 * Return: ha
 */
int conv(char f)
{
	int k;

	if ((f >= 48) && (f <= 57))
	{
		k = f - 48;
	}
	else if (f == '-')
	{
		k = -1;
	}
	else
	{
		k = 69;
	}
	return (k);
}
/**
 * _atoi - hi
 * @s: hi
 * Return: ha
 */
int _atoi(char *s)
{
	int i, x, j, h, y, nb, n;
	char t;

	j = 1;
	nb = 0;
	y = 1;
	x = strlen(s);
	for (i = x - 1; i >= 0; i--)
	{
		t = s[i];
		n = conv(t);
		if ((n >= 0) && (n <= 9))
		{
			if (h == 0)
			{
				nb = 0;
				j = 1;
				y = 1;
			}
			n = n * j;
			nb = nb + n;
			if (j < 1000000000)
			j = j * 10;
		}
		else if (n == -1)
			y = -y;
		if (n == 69)
			h = 0;
		else
			h = 1;
	}
	nb = nb * y;
	return (nb);
}
