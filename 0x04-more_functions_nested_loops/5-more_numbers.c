#include "main.h"
#include <stdio.h>
/**
 * more_numbers - hi
 */
void more_numbers(void)
{
	int x, y, r, z;

	for (r = 48; r <= 57; r++)
	{
		z = 57;
		for (x = 48; x <= 49; x++)
		{
			if (x == 49)
				z = 52;
			for (y = 48; y <= z; y++)
			{
				if (x == 49)
				{
					_putchar(x);
				}
					_putchar(y);
			}
		}
	_putchar('\n');
	}
}
