#ifndef varidac
#define varidac
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "string.h"
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct op
{
	char op;
	void (*f)(va_list ls);
} op_t;
#endif
