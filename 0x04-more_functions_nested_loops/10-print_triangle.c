#include "holberton.h"

/**
 * print_triangle - print a triangle
 * @size: triangle size
 */
void print_triangle(int size)
{
	int i, n;
	int a, b;

	for (i = 0; i < size; i++)
	{
		n = size - 1 - i;
		for (a = size - 1 - i; a > 0; a--)
			_putchar(' ');
		for (b = size - n; b > 0; b--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
