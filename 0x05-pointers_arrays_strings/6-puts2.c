#include "holberton.h"

/**
 * puts2 - function that prints all characters
 * @str: print the characters
 */
void puts2(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
	{
		;
		a++;
	}
	b = 0;
	while (b < a)
	{
		_putchar(str[b]);
		b += 2;
	}
	_putchar('\n');
}
