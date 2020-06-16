#include "holberton.h"

/**
 * Write a function that checks for lowercase character
 *
 *
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
