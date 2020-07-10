#include "holberton.h"

/**
 * string_nconcat - that concatenates two stings
 * @s1: pointer string
 * @s2: pointer string
 * @n: size
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j++;
	if (n >= j)
		n = j;
	ptr = malloc((i + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (a < i)
	{
		ptr[a] = s1[a];
		a++;
	}
	while (b < j && b < n)
	{
		ptr[a] = s2[b];
		b++;
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
