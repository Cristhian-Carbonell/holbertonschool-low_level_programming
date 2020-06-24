#include "holberton.h"

/**
 * print_rev - display a reverse string
 * @s: used to print the string
 */
void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		;
	}
	a--;
	for (; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
