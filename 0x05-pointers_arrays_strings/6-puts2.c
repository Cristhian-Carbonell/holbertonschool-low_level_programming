#include "holberton.h"

/**
 * puts2 - function that prints all characters
 * @str: print the characters
 */
void puts2(char *str)
{
	while (*str)
	{
		if (*str % 2 == 0)
		{
		_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
