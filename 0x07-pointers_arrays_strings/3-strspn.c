#include "holberton.h"

/**
 * _strspn - that gets the length of a prefix substring
 * @s: of the initial segment
 * @accept: consists entirely of bytes
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int b;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
			{
				c++;
				break;
			}
		}
		if (accept[b] == '\0')
		{
			return (c);
		}
	}
	return (c);
}
