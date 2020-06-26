#include "holberton.h"

/**
 * _strncat -
 * @dest:
 * @src:
 * @n:
 *
 * Return:
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[i + a] = src[a];
	}

	return (dest);
}
