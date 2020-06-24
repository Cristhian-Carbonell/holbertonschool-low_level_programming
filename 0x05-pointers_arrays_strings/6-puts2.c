#include "holberton.h"

/**
 *
 *
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
