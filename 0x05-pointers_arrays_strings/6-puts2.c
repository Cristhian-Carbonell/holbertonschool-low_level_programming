#include "holberton.h"

/**
 * puts2 - function that prints all characters
 * @str: print the characters
 */
void puts2(char *str)
{
	int a, b;

	a = 0;
	while (str[a])
	{
		;
		a++;
	}
	for (b = 0; b < a; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
