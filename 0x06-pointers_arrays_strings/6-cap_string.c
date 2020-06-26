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

	i = 0;
	while (str[i] != '\0')
	{
			if (str[0] >= 'a' && str[0] <= 'z')
			{
				str[0] -= 32;
			}
			if (str[i] >= 'a' && str[i] <= 'z' &&
			    (str[i - 1] == ',' || str[i - 1] == ';' ||
				 str[i - 1] == '.' || str[i - 1] == '!' ||
				 str[i - 1] == '?' || str[i - 1] == '"' ||
				 str[i - 1] == '\n' || str[i - 1] == '(' ||
				 str[i - 1] == ')' || str[i - 1] == '{' ||
			     str[i - 1] == '}' || str[i - 1] == 32 || '\t'))
			{
				str[i] -= 32;
			}
			i++;
	}
	return (str);
}