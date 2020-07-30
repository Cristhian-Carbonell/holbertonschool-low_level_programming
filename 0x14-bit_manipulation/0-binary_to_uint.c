#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, ro 0
 */
unsigned int binary_to_uint(const char *b)
{unsigned int out, resultado = 0;
	int position = 0, indice = 0;
	int num[] = {1, 2, 4, 8, 16, 32, 64, 128, 256};

	if (b == NULL)
		return (0);
	while (b[position] > '\0')
	{
		if (b[position] != '1' && b[position] != '0')
			return (0);
			position++;
	}
	position--;
	while (position >= 0)
	{
		if (b[position] == '0')
			out = 0;
		else
			out = 1;
		if (resultado == 0)
			resultado = out * num[indice];
		else
			resultado = resultado + (out * num[indice]);
		indice++;
		position--;
	}
	return (resultado);
}
