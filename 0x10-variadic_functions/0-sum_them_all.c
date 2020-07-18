#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: list the number of arguments
 *
 * Return: result sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
