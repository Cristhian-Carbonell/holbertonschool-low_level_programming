#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: letter for lowercase check
 *
 * Return: 1 if c is lowercase; 0 otherwise
 */
int _islower(int c)
{
	int is_lowercase;

	if (c >= 'a' && c <= 'z')
		is_lowercase = 1;
	else
		is_lowercase = 0;
	return (is_lowercase);
}
