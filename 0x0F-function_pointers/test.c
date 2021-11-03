#include "3-calc.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * get_op_func - hi
 * @s: hi
 */
void main()
{
        op_t ops[] = {
        {"+", },
        {"-", },
        {"*", },
        {"/", },
        {"%", },
        {NULL, NULL}
        };
        int i = 0;

        while (i < 5)
        {
      		printf("%s", ops[i].op);
		i++;
        }
}
