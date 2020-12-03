#include "holberton.h"
#include <stdio.h>

/**
 * print_number - function that prints an integer.
 * @n: number print
 */
void print_number(int n)
{
	long num = n;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar(num % 10 + '0');
}