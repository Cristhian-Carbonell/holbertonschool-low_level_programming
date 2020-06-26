#include "holberton.h"

/**
 * string_toupper - changers all lowercase letters of a string to uppercase
 * @str: character string
 *
 * Return: uppercase string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (int) str[i] - 32;
		}
	}
	return (str);
}
