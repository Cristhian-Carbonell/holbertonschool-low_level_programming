#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: locates the first occurrence in the string
 * @accept: bytes in teh string
 *
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int b;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
