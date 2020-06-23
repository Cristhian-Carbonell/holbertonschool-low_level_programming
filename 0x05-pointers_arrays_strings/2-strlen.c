#include "holberton.h"

/**
 * _strlen - return length of string
 * @s: string who's length will be returned excluding '\0'
 *
 * Return: length of string *S
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		;
	}
	return (i);
}
