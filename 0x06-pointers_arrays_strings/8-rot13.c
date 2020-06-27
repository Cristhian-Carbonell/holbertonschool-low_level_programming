#include "holberton.h"

/**
 * rot13 - encodes string to rot13
 * @str: character
 *
 * Return: string in str
 */
char *rot13(char *str)
{
	int i, b;
	char ebg[] = "abcdefghijklmABCDEFGHIJKLM";
	char to[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (b = 0; ebg[b] != '\0'; b++)
		{
			if (str[i] == ebg[b])
			{
				str[i] = to[b];
			}
			else if (str[i] == to[b])
			{
				str[i] = ebg[b];
			}
		}
	}
	return (str);
}
