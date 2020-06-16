#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @arg: digit who is last digit will be evaluated
 *
 * Return: prints the value of the last digit
 */
int print_last_digit(int arg)
{
	int last_digit;

	last_digit = (arg % 10);
	if (last_digit > 0)
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		_putchar(last_digit * -1 + '0');
		return (last_digit * -1);
	}
}
