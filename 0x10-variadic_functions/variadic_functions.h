#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - struct op
 *
 * @op: The operator
 * @func: The function associated
 */
typedef struct op
{
	char *op;
	void (*func)();
} op_t;
void func_char(va_list ap);
void func_int(va_list ap);
void func_float(va_list ap);
void funcp_char(va_list ap);

#endif
