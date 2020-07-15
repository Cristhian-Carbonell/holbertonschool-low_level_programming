#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * on each element of an arry
 * @array: pointer
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action) (int))
{
	int n, i;

	n = size;
	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < n; i++)
		action(array[i]);
}
