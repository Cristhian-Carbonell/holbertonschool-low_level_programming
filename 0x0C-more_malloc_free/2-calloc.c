#include "holberton.h"

/**
 * _calloc - that allocates memory for an array, using malloc
 * @nmemb: integer
 * @size: integer
 *
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = calloc(nmemb, sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = i + 1;
	}
	ptr[i] = '\0';
	return (ptr);
}
