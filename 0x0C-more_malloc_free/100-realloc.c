#include "holberton.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space fot ptr
 * @new_size: is the new size, in bytes of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
		exit(1);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		ptr = malloc(new_size + old_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	
	free(ptr);
	ptr = malloc(new_size * sizeof(int));
	if (!ptr)
		return (NULL);

	return (ptr);
}
