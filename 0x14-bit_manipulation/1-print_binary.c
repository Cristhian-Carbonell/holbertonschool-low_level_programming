#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: numbers
 */
void print_binary(unsigned long int n)
{
	int cont;
	unsigned long int tmp;

	cont = 0, tmp = n;
	if (n == 0)
		_putchar('0');
	while (tmp > 0)
       	{
		tmp = tmp >> 1;
		cont++;
	}
	cont--;
	while (cont >= 0)
	{
		if (1 & (n >> cont))
			_putchar('1');
		else
			_putchar('0');
		cont--;
	}

}
