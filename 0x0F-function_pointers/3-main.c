#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - hi
 * @argc: hi
 * @argv: hi
 * Return: hi
 */
int main(int argc, char *argv[])
{
	int x, y, a;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	op = argv[2];
	if (((op[0] != '+') && (op[0] != '-') && (op[0] != '*')
			&& (op[0] != '/') && (op[0] != '%') ) 
		|| (strlen(op) != 1))
	{
		printf("Error\n");
		exit(99);
	}
	if ((op[0] == '%' || op[0] == '/') && y == 0)
		{
		printf("Error\n");
		exit(100);

	}
	a = get_op_func(op)(x, y);
	printf("%d\n", a);
	return (0);
}
