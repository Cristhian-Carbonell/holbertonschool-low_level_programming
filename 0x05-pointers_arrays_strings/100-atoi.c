#include "holberton.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: pointer that stores the address of the first character
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int count = 1;
	unsigned int valor = 0;
	char work = 0;

	while (*s)
	{
		if (*s == '-')
			count = count * (-1);
		if (*s >= '0' && *s <= '9')
		{
			work = 1;
			valor = valor * 10 + *s - '0';
		}
		else if (*s < '0' || *s > '9')
			if (work)
				break;
		s++;
	}
	if (count < 0)
		valor = valor * count;

	return (valor);
}
