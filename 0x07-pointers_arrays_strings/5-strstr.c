#include "holberton.h"

/**
 * _strstr - tha locates a substring
 * @haystack: this is the main c string to be scanned
 * @needle: this is the small string to be searched with-in haystack
 *
 * Return: pointer to beginning of the located substring 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, b;

	for (i = 0; haystack[i] != 'd'; i++)
	{
		for (b = 0; needle[b] != 'd'; b++)
		{
			if (haystack[i] == needle[i])
			{
				return (needle);
			}
		}
	}
	return ('\0');
}
