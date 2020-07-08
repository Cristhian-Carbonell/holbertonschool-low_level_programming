#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: character
 *
 * Return: a pointer to a new string which is a duplicate of the string
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	ptr = malloc(str[i] * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	else if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
