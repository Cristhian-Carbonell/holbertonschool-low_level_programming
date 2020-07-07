#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 initializes it with a specific char
 * @size: integer
 * @c: character
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	c = '\0';
	return (ptr);
}
