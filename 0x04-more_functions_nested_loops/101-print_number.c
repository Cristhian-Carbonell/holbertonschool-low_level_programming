#include "holberton.h"

/**
 * print_number - function that prints an integer.
 * @n: is the number
 */
void print_number(int n)
{
	unsigned int a, b, c, temp = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	a = n;
	b = n;
	if (a > 9)
	{
		while (a >= 10)
		{
			temp = temp * 10;
			a /= 10;
		}
		_putchar((b / temp) + '0');
		temp /= 10;

		for (c = temp; c >= 1; c /= 10)
			_putchar((b / c) % 10 + '0');
	}
	else
		_putchar(a + '0');
}
