#include "holberton.h"

/**
 * print_line - draws straight line in the terminal
 * @n: number of times the character '_' shoud be printed
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
