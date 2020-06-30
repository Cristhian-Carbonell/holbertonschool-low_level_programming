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
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] == needle[i])
			{
				return (needle);
			}
		}
	}
	return ('\0');
}
