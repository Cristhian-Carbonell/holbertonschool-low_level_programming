#include "holberton.h"

/**
 * print_number - function that prints an integer.
 * @n: number print
 */
void print_number(int n)
{
	unsigned int num = n;
	/* If number is smaller than 0, put a - sign */
	/* and change number to positive */
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/* Remove the last digit and recur */
	if (num / 10 != 0)
		print_number(num / 10);

	/* Print the last digit */
	_putchar(num % 10 + '0');
}
