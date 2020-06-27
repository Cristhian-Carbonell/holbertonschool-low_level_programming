#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 *
 * Return: string with rot13
 */
char *rot13(char *str)
{
	int i, b;
	char ebg13[] = "abcdefghijklmABCDEFGHIJKLM";
	char to[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (b = 0; ebg13[b] != '\0'; b++)
		{
			if (str[i] == ebg13[b])
			{
				str[i] = to[b];
			}
			else if (str[i] == to[b])
			{
				str[i] = ebg13[b];
			}
		}
	}
	return (str);
}
