#include "3-calc.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * op_add - hi
 * @a: hi
 * @b: hi
 * Return: hi
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - hi
 * @a: hi
 * @b: hi
 * Return: hi
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - hi
 * @a: hi
 * @b: hi
 * Return: hi
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - hi
 * @a: hi
 * @b: hi
 * Return: hi
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - hi
 * @a: hi
 * @b: hi
 * Return: hi
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
