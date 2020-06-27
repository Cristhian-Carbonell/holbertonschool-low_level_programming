#include "holberton.h"

/**
 * cap_string - capitalizes all word of a string
 * @str: character string
 *
 * Return: string with each word capitalized
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
		case ' ':
		case '\n':
		case '\t':

			if (str[i + 1] > 'a' && str[i + 1] < 'z')
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
