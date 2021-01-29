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
	int *ptr, i, j;

	if (min > max)
		return (NULL);

	ptr = (int *) malloc((max - min + 1) * sizeof(int));
	if (!ptr)
		return (NULL);
	for (j = min, i = 0; j <= max; i++, j++)
		ptr[i] = j;

	return (ptr);
}
