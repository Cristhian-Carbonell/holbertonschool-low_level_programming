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
	if (a % 2 == 0)
	{
		for (b = a / 2; b < a; b++)
		{
			_putchar(str[b]);
		}
	}
	else
	{
		for (b = (a + 1) / 2; b < a; b++)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
