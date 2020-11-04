#include "holberton.h"

/**
 * print_number - function that prints an integer.
 * @n: is the number
 */
void print_number(int n)
{
	int a, b, c, d, temp, temp1;

	if (n == 0)
		_putchar(n + '0');
	else
		if (n < 100)
		{
			if (n < 0)
			{
				n *= -1;
				_putchar('-');
			}
			a = n / 10;
			b = n % 10;
			_putchar(a + '0');
			_putchar(b + '0');
		}
		else if (n < 1000)
		{
			temp = n / 10;
			a = temp / 10;
			b = temp % 10;
			c = n % 10;
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(c + '0');
		}
		else if (n < 10000)
		{
			temp = n / 10;
			c = temp % 10;
			temp1 = temp / 10;
			a = temp1 / 10;
			b = temp1 % 10;
			d = n % 10;
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(c + '0');
			_putchar(d + '0');
		}
}
