#include "holberton.h"

/**
 * print_sing - prints + if n is greater than 0
 * 0 is n is 0 - if n is less tahn 0
 * @n: integer to be tested in relation to 0
 *
 * Return: 1 if greater than 0, 0 if is 0, -1 if less than 0
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
