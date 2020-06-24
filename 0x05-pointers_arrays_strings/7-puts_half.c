#include "holberton.h"

/**
 * puts_half -print the second half ot the string
 * @str: prints half of a string
 */
void puts_half(char *str)
{
	int a, b;

	for (a = 0; str[a]; a++)
	{
		;
	}
	for (b = 5; b != a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
