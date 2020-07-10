#include "holberton.h"

/**
 * malloc_checked - that allocates memory using malloc
 * @b: memory block size
 *
 * Return: pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
