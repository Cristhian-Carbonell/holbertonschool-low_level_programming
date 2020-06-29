#include "holberton.h"

/**
 * _strchr - locate a character in a string
 * @s: this is the C string to be scanned
 * @c: this is the character to be searched in s
 *
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}

	return ('\0');
}
