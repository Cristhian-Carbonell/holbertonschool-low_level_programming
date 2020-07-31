#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, ro 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, resultado = 0;
	int position = 0, mul = 1;

	if (b == NULL)
		return (0);
	while (b[position] != '\0')
	{
		if (b[position] != '1' && b[position] != '0')
			return (0);
		position++;
	}
	position--;
	while (position >= 0)
	{
		if (b[position] == '0')
			num = 0;
		else
			num = 1;
		if (resultado == 0 && mul == 1)
			resultado = num;
		else
			resultado = resultado + (num * mul);
		mul *= 2;
		position--;
	}
	return (resultado);
}
