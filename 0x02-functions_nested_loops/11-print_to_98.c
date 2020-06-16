#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints from num to 98
 * @n: starting number for count
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
		putchar('\n');
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
		putchar('\n');
	}
}
