#include "holberton.h"

/**
 * comparacion - compare the length of the character string
 * @der: start length
 * @izq: end length
 *
 * Return: 1 palindrome, 0 if not
 */
int comparacion(char *der, char *izq)
{
	if (*der != *izq)
	{
		return (0);
	}
	if (der >= izq)
	{
		return (1);
	}
	return (comparacion(der + 1, izq - 1));
}

/**
 * length - loop through the character string
 * @s: character string
 *
 * Return: character string length
 */
int length(char *s)
{
	int a;

	a = 0;
	if (*s == '\0')
	{
		return (0);
	}
	a = length(s + 1);
	a++;
	return (a);
}

/**
 * is_palindrome - if a string is a palindrome
 * @s: character string
 *
 * Return: 1 if a string, 0 if not
 */
int is_palindrome(char *s)
{
	int a = length(s);
	char *der = s;
	char *izq = s + (a - 1);

	if (a == 0)
	{
		return (1);
	}
	return (comparacion(der, izq));
}
