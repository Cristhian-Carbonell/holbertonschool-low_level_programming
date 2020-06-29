#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: points bytes to fill in memory
 * @b: fill the first bytes of the memory area
 * @n; constante
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
