#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to be appende to char
 *
 * Return: resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (a = 0; src[a] != '\0'; a++, i++)
	{
		dest[i] = src[a];
	}
	dest[i] = '\0';

	return (dest);
}
