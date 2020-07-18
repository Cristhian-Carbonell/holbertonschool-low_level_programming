#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: is the string passed to the function
 * @n: is the number of strings passed to the function*
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ptr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{	ptr = va_arg(ap, char *);
		if (*ptr != '\0')
		{
			printf("%s", ptr);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
			else if (separator == NULL)
				printf("%s", ptr);
		}
		else if (*ptr == '\0')
			printf("(nil)");
	}
	printf("\n");
	va_end(ap);
}
