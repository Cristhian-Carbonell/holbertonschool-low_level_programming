#include "holberton.h"

/**
 * factorial - the factorial of a given number
 * @n: is lower than 0 return -1 to indicate an error
 *
 * Return: factorial of 0 is 1
 */
int factorial(int n)
{
	int rta;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	rta = n * factorial(n - 1);

	return (rta);
}
