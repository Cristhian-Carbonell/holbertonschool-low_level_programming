#include "holberton.h"

/**
 * str_concat - that concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, a, b;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b < j; b++, a++)
	{
		ptr[a] = s2[b];
	}
	ptr[a] = '\0';
	return (ptr);
}
