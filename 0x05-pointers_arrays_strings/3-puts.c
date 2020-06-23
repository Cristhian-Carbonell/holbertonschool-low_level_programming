#include "holberton.h"

/**
 * _puts - prin a string
 * @str: pointer used to print the string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
