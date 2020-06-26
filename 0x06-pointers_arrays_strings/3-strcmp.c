#include "holberton.h"

/**
 * _strcmp -compares two strings
 * @s1: character string 1
 * @s2: character string 2
 *
 * Return: an integer less than, equal to, or greater than zero if s1
 * found, respectively, to be less than, to march, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return ((int) s1[i] - s2[i]);
	}
	return (0);
}
