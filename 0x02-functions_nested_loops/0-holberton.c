#include "holberton.h"

/**
 * main - Write a program that prints Holberton, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "Holberton\0";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
