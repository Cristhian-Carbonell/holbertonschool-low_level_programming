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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			else if (str[i - 1] == 32 || '\t' || '\n' || ',' || ';'
				 || '.' || '!' || '?' || '"' || '(' || ')' ||
				 '{' || '}')
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
