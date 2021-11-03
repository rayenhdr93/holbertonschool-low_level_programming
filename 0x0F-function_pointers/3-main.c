#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - hi
 */
int main(int argc, char *argv[])
{
	int x, y, a;

	if (argc != 3)
	{
		printf("Error");
		return(0);
		exit(98);
	}
	else
	{
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	a = (*get_op_func(argv[2]))(x, y); 
	printf("%d\n",a);
	return(0);
	}
}
