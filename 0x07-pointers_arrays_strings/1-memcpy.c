#include "holberton.h"

/**
 * _memcpy - copy memory area
 * @dest: memory area dest
 * @src: memory area src
 * @n: copies n bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	int b = 0;

	for (i = 0; i < n; i++)
		for (b = 0; b < 10; b++)
			dest[b] = src[b];
	return (dest);
}
