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
	unsigned int resul;

	if (index > 63)
		return (-1);
	resul = (1 & (n >> index));
	return (resul);
}
