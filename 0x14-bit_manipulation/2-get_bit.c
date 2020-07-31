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
	unsigned int cont = 1, resul;
	unsigned long int tmp = n;

	while (tmp > 0)
	{
		if (index > 11)
			return (-1);
		tmp = tmp >> 1;
		cont++;
	}
	if (index > cont)
		return (-1);
	resul = (1 & (n >> index));
	return (resul);
}
