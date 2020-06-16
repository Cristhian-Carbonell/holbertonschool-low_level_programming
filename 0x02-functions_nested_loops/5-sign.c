#include "holberton.h"

/**
 * Write a function that prints the sign of a number.
 */
int print_sign(int n)
{
	int retval;

	if (n > 0)
	{
		_putchar('+');
		retval = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		retval = 0;
	}
	else
	{
		_putchar('-');
		retval = -1;
	}
	return (retval);
}
