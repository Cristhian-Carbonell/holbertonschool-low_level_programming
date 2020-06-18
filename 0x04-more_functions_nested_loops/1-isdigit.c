#include "holberton.h"

/**
 * _isdigit -determines if char is 0
 * @c: char to be checked if 1
 *
 * Return: 1 if 0 is true, and false if it is a
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
