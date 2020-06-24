#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copy string from source to destination including
 * terminating null byte
 * @dest: destination for string to be copied
 * @src: string to be copied
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; (dest[b] = src[b]); b++)
	{
		;
	}
	return (dest);
}
