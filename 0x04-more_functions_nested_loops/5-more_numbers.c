#include "holberton.h"

/**
 * more_numbers - print the numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			int c, d;

			c = b / 10;
			d = b % 10;
			if (b > 9)
				_putchar(c + '0');
			_putchar(d + '0');
		}
		_putchar('\n');
	}
}
