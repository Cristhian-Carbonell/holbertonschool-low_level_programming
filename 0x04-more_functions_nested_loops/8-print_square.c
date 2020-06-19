#include "holberton.h"

/**
 * print_square -print a square
 * @size: variable to print #
 */
void print_square(int size)
{
	int n, i;

	i = size;
	if (size <= 0)
		_putchar('\n');
	for (; size > 0; size--)
	{
		for (n = 0; n < i; n++)
			_putchar('#');
		_putchar('\n');
	}
}
