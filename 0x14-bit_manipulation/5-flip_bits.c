#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: numbers
 * @m: index
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit = 0;
	unsigned long int tmp;

	tmp = n ^ m;
	while (tmp != 0)
	{
		if (tmp & 1)
			bit++;
		tmp = tmp >> 1;
	}
	return (bit);
}
