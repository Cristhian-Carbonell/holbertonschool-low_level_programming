#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array -
 * @n:
 */
void reverse_array(int *a, int n)
{
	int i, tem;

	tem = 0;
	n--;
	for (i = 0; i < n / 2; i++)
	{
		tem = a[i];
		a[i] = a[n -i];
		a[n -i] = tem;
	}
}
