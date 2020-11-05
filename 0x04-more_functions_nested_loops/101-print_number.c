#include "holberton.h"

/**
 * print_number - function that prints an integer.
 * @n: is the number
 */
void print_number(int n)
{
	int a, b, c, temp;

	if (n <= INT_MIN || n >= INT_MAX)
	{
		print_num_min_max(n);
		return;
	}
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n < 10)
		_putchar(n + '0');
	else if (n < 100)
	{
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
		print_num(n);
	else if (n < 1000000000)
		print_8(n);
}

/**
 * print_num - print number of 4
 * @n: is the number
 */
void print_num(int n)
{
	int a, b, c, d, temp;

	temp = n / 10;
	c = temp % 10;
	temp = temp / 10;
	a = temp / 10;
	b = temp % 10;
	d = n % 10;
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(c + '0');
	_putchar(d + '0');

}

/**
 * print_8 - print number of 8
 * @n: is the number
 */
void print_8(int n)
{
	int a, b, c, d, e, f, g, h, i, temp;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	i = n % 10;
	temp = n / 10;
	h = temp % 10;
	temp = temp / 10;
	g = temp % 10;
	temp = temp / 10;
	f = temp % 10;
	temp = temp / 10;
	e = temp % 10;
	temp = temp / 10;
	d = temp % 10;
	temp = temp / 10;
	c = temp % 10;
	temp = temp / 10;
	a = temp / 10;
	b = temp % 10;
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar(e + '0');
	_putchar(f + '0');
	_putchar(g + '0');
	_putchar(h + '0');
	_putchar(i + '0');
}

/**
 * print_num_min_max - print INT_MAX, INT_MIN
 * @n: is the number
 */
void print_num_min_max(int n)
{
	int a, b, c, d, e, f, g, h, i, j, temp;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	j = n % 10;
	temp = n / 10;
	i = temp % 10;
	temp = temp / 10;
	h = temp % 10;
	temp = temp / 10;
	g = temp % 10;
	temp = temp / 10;
	f = temp % 10;
	temp = temp / 10;
	e = temp % 10;
	temp = temp / 10;
	d = temp % 10;
	temp = temp / 10;
	c = temp % 10;
	temp = temp / 10;
	a = temp / 10;
	b = temp % 10;
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar(e + '0');
	_putchar(f + '0');
	_putchar(g + '0');
	_putchar(h + '0');
	_putchar(i + '0');
	_putchar(j + '0');
}
