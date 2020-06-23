#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to int to be swapped
 * @b: pointer to other int to be swapped
 */
void swap_int(int *a, int *b)
{
	int exc;

	exc = *b;
	*b = *a;
	*a = exc;
}
