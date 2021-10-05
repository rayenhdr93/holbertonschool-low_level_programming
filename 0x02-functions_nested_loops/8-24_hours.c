#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - hi
 *
 * Return: hi
 */
void jack_bauer(void)
{
	int x, y, z, r;
	
	for (x = 48; x <= 50; x++)
		for (y = 48; y <= 57; y++)
			for (z = 48; z <= 53; z++)
				for (r = 48; r <= 57; r++)
				{
					if ((x == 48) || (x == 49) || ((x == 50) && (y < 52)))
					{
					_putchar(x);
					_putchar(y);
					_putchar(':');
					_putchar(z);
					_putchar(r);
					_putchar('\n');
					}
				}

}
