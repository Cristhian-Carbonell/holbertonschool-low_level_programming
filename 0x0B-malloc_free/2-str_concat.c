#include "holberton.h"

/**
 * str_concat - that concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return:
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, a, b = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
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
	ptr = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	for (a = 0; a < (i + j); a++)
	{
		if (a < 6)
		{
			ptr[a] = s1[a];
		}
		else
		{
			ptr[a] = s2[b++];
		}
	}
	return (ptr);
}
