#include "holberton.h"

/**
 * main - Write a program that prints Holberton, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char *word = "Holberton\n";

	while (*word)
	{
		_putchar(*word);
		word++;
	}
	return (0);
}
