#include "holberton.h"

/**
 * reverse_array - this function reverses the content of an array of integers
 * @a: array of integers
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int tem = 0;

	n--;
	for (i = 0; i < n / 2; i++)
	{
		tem = a[i];
		a[i] = a[n - i];
		a[n - i] = tem;
	}
}
