#include "holberton.h"

/**
 * print_square -print a square
 * @size: variable to print #
 */
void print_square(int size)
{
	int n, i;

	for (n = 0; n < size; n++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
