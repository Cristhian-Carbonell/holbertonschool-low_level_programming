#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 initializes it with a specific char
 * @size: integer
 * @c: character
 *
 * Return: a pointer to
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc((size + 1) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
