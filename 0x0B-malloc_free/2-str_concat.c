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
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < i)
	{
		ptr[a] = s1[a];
		a++;
	}
	b = 0;
	while (b < j)
	{
		ptr[a] = s2[b];
		b++;
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
