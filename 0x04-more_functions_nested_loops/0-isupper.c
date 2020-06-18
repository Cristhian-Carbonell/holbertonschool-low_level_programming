#include "holberton.h"

/**
 * _isupper - determines if char is uppercase
 * @c: char to be checked if upper
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
