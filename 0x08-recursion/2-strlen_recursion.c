#include "holberton.h"

/**
 * _strlen_recursion - that returns the length of a string
 * @s: character string
 *
 * Return: the number of bytes in the string s
 */
int _strlen_recursion(char *s)
{
	int size;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	size = _strlen_recursion(s + 1);
	size++;
	}
	return (size);
}
