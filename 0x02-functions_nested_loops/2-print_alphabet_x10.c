#include "holberton.h"

/**
 * main - Write a function that prints 10 times the alphabet, .
 * in lowercase, followed by a new line
 *
 */
void print_alphabet_x10(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
