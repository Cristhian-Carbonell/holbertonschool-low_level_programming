#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followeb by a new line
 * @separator: string
 * @n: is the number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int j;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, int);
		if (i != n  && separator != NULL)
			printf("%d%s", j, separator);
		if (i == n && separator != NULL)
			printf("%d", j);
		if (separator == NULL)
			printf("%d", j);

	}
	printf("\n");
	va_end(ap);
}
