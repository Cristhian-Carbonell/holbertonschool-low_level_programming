#include "variadic_functions.h"

/**
 * print_all -
 * @format:
 *
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j;
	char *separator = "";
	op_t ops[] = {
		{"c", func_char},
		{"i", func_int},
		{"f", func_float},
		{"s", funcp_char},
		{NULL, NULL}
	};

	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (ops[j].op != NULL)
		{
			if (*(ops[j].op) == format[i])
			{
				printf("%s", separator);
				ops[j].func(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

/**
 * func_char -
 * @ap:
 */
void func_char(va_list ap)
{
	printf("%c",  va_arg(ap, int));
}

/**
 * func_int -
 * @ap:
 */
void func_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * va_list -
 * @ap:
 */
void func_float(va_list ap)
{
 	printf("%f", va_arg(ap, double));
}

/**
 * funcp_char -
 * @ap:
 */
void funcp_char(va_list ap)
{
	char *resul;

	resul = va_arg(ap, char *);
	if (resul == NULL)
		printf("(nil)");
	else
		printf("%s", resul);
}
