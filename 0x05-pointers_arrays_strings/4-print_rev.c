#include "holberton.h"

/**
 * print_rev - display a reverse string
 * @s: used to print the string
 */
void print_rev(char *s)
{
	int a;

	a = _strlen(s);
	a--;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
