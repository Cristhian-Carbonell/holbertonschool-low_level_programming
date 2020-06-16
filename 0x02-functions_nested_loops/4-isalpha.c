#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character constant to be checked for alphabetic character
 *
 * Return: 1 if c is letter, lower or uppercase; 0 otherwise
 */
int _isalpha(int c)
{
	int is_alpha;

	if (c >= 'a' && c <= 'z')
		is_alpha = 1;
	else if (c >= 'A' && c <= 'Z')
		is_alpha = 1;
	else
		is_alpha = 0;
	return (is_alpha);
}
