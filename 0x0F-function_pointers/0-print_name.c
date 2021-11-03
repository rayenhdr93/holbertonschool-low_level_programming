#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - hi
 * @name: hi
 * @f: hi
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	(*f)(name);
}
