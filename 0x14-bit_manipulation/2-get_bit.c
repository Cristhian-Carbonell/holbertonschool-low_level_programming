#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit a a given index
 * @n: numberz
 * @index: is the index
 *
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int cont = 1, resul;
	unsigned long int tmp = n;

	if (index == 0)
		return (0);
	while (tmp > 0)
	{
		tmp = tmp >> 1;
		cont++;
	}
	resul = (1 & (n >> index));
	return (resul);
}
