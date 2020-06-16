#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: n times for times table to print. n must be between 0 and 15
 *
 */
void print_times_table(int n)
{
	int x, y;

	if (n >= 0 && n < 16)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				int a, b, c;

				a = (x * y) / 10 / 10;
				b = (x * y) / 10 % 10;
				c = (x * y) % 10;
				if (x * y > 99)
					_putchar(a + '0');
				if (x * y > 9)
					_putchar(b + '0');
				_putchar(c + '0');

				if (y == n)
					break;
				_putchar(',');
				_putchar(' ');
				if (x * (y + 1) < 100)
					_putchar(' ');
				if (x * (y + 1) < 10)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
