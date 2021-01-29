#include "holberton.h"

/**
 * array_range - function that creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = (int *) malloc((min + max) * sizeof(int));
	if (!ptr)
		return (NULL);
	for (i = 0; i < max; i++, min++)
		ptr[i] = min

	return (ptr);
}
